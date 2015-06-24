// Copyright 2015 The Cockroach Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License. See the AUTHORS file
// for names of contributors.
//
// Author: Peter Mattis (peter@cockroachlabs.com)

package structured

import (
	"reflect"
	"testing"

	"github.com/cockroachdb/cockroach/util/leaktest"
)

func TestValidateTableDesc(t *testing.T) {
	defer leaktest.AfterTest(t)
	testData := []struct {
		err  string
		desc TableDescriptor
	}{
		{`empty table name`,
			TableDescriptor{}},
		{`"foo/bar" may not contain "/"`,
			TableDescriptor{Table: Table{Name: "foo/bar"}}},
		{`table must contain at least 1 column`,
			TableDescriptor{Table: Table{Name: "foo"}}},
		{`empty column name`,
			TableDescriptor{
				Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0},
				},
				NextColumnID: 1,
			}},
		{`table must contain at least 1 index`,
			TableDescriptor{
				Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				NextColumnID: 1,
			}},
		{`duplicate column name: "bar"`,
			TableDescriptor{
				Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
					{ID: 0, Column: Column{Name: "bar"}},
				},
				NextColumnID: 1,
			}},
		{`column "blah" duplicate ID of column "bar": 0`,
			TableDescriptor{
				Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
					{ID: 0, Column: Column{Name: "blah"}},
				},
				NextColumnID: 1,
			}},
		{`empty index name`,
			TableDescriptor{Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				Indexes: []IndexDescriptor{
					{ID: 0},
				},
				NextColumnID: 1,
			}},
		{`index "bar" must contain at least 1 column`,
			TableDescriptor{Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				Indexes: []IndexDescriptor{
					{ID: 0, Index: Index{Name: "bar"}},
				},
				NextColumnID: 1,
				NextIndexID:  1,
			}},
		{`duplicate index name: "bar"`,
			TableDescriptor{Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				Indexes: []IndexDescriptor{
					{ID: 0, Index: Index{Name: "bar"}, ColumnIDs: []uint32{0}},
					{ID: 0, Index: Index{Name: "bar"}, ColumnIDs: []uint32{0}},
				},
				NextColumnID: 1,
				NextIndexID:  1,
			}},
		{`index "blah" duplicate ID of index "bar": 0`,
			TableDescriptor{Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				Indexes: []IndexDescriptor{
					{ID: 0, Index: Index{Name: "bar"}, ColumnIDs: []uint32{0}},
					{ID: 0, Index: Index{Name: "blah"}, ColumnIDs: []uint32{0}},
				},
				NextColumnID: 1,
				NextIndexID:  1,
			}},
		{`index "bar" contains unknown column ID 1`,
			TableDescriptor{Table: Table{Name: "foo"},
				Columns: []ColumnDescriptor{
					{ID: 0, Column: Column{Name: "bar"}},
				},
				Indexes: []IndexDescriptor{
					{ID: 0, Index: Index{Name: "bar"}, ColumnIDs: []uint32{1}},
				},
				NextColumnID: 1,
				NextIndexID:  1,
			}},
	}
	for i, d := range testData {
		if err := ValidateTableDesc(d.desc); err == nil {
			t.Errorf("%d: expected error, but found success: %+v", i, d.desc)
		} else if d.err != err.Error() {
			t.Errorf("%d: expected \"%s\", but found \"%s\"", i, d.err, err.Error())
		}
	}
}

func TestTableDescFromSchema(t *testing.T) {
	defer leaktest.AfterTest(t)
	// Verify TableDescFromSchema and TableSchemaFromDesc by round-tripping a
	// schema.
	schemas := []TableSchema{
		{Table: Table{Name: "foo"},
			Columns: []Column{
				{Name: "a"},
				{Name: "b"},
				{Name: "c"},
			},
			Indexes: []TableSchema_IndexByName{
				{Index: Index{Name: "a", Unique: true},
					ColumnNames: []string{"a"}},
				{Index: Index{Name: "b"},
					ColumnNames: []string{"a", "b"}},
			}},
	}
	for i, schema := range schemas {
		desc := TableDescFromSchema(schema)
		if err := ValidateTableDesc(desc); err != nil {
			t.Errorf("expected success, but found %s", err)
		}
		schema2 := TableSchemaFromDesc(desc)
		if !reflect.DeepEqual(schema, schema2) {
			t.Errorf("%d: expected %+v, but got %+v", i, schema, schema2)
		}
	}
}

func TestColumnTypeSQLString(t *testing.T) {
	defer leaktest.AfterTest(t)

	testData := []struct {
		colType     ColumnType
		expectedSQL string
	}{
		{ColumnType{Kind: ColumnType_BIT}, "BIT"},
		{ColumnType{Kind: ColumnType_BIT, Width: 1}, "BIT(1)"},
		{ColumnType{Kind: ColumnType_INT}, "INT"},
		{ColumnType{Kind: ColumnType_INT, Width: 2}, "INT(2)"},
		{ColumnType{Kind: ColumnType_FLOAT}, "FLOAT"},
		{ColumnType{Kind: ColumnType_FLOAT, Width: 3}, "FLOAT(3)"},
		{ColumnType{Kind: ColumnType_FLOAT, Width: 4, Precision: 5}, "FLOAT(4,5)"},
		{ColumnType{Kind: ColumnType_DECIMAL}, "DECIMAL"},
		{ColumnType{Kind: ColumnType_DECIMAL, Width: 6}, "DECIMAL(6)"},
		{ColumnType{Kind: ColumnType_DECIMAL, Width: 7, Precision: 8}, "DECIMAL(7,8)"},
		{ColumnType{Kind: ColumnType_DATE}, "DATE"},
		{ColumnType{Kind: ColumnType_TIME}, "TIME"},
		{ColumnType{Kind: ColumnType_DATETIME}, "DATETIME"},
		{ColumnType{Kind: ColumnType_TIMESTAMP}, "TIMESTAMP"},
		{ColumnType{Kind: ColumnType_CHAR}, "CHAR"},
		{ColumnType{Kind: ColumnType_CHAR, Width: 10}, "CHAR(10)"},
		{ColumnType{Kind: ColumnType_BINARY}, "BINARY"},
		{ColumnType{Kind: ColumnType_BINARY, Width: 11}, "BINARY(11)"},
		{ColumnType{Kind: ColumnType_TEXT}, "TEXT"},
		{ColumnType{Kind: ColumnType_BLOB}, "BLOB"},
		{ColumnType{Kind: ColumnType_ENUM, Vals: []string{"a"}}, "ENUM(a)"},
		{ColumnType{Kind: ColumnType_SET, Vals: []string{"b", "c"}}, "SET(b,c)"},
	}
	for i, d := range testData {
		sql := d.colType.SQLString()
		if d.expectedSQL != sql {
			t.Errorf("%d: expected %s, but got %s", i, d.expectedSQL, sql)
		}
	}
}
