#include "TableSpace.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include "Table.h"
using namespace std;

void TableSpace::createTable(string tableName) {
	Table newTable;
	tables.push_back(newTable);
	nameOfTables.push_back(tableName);
	numOfTable++;
}

Table TableSpace::getTable(int _tableIndex) {
	return tables[_tableIndex];
}

Table TableSpace::getTable(string _name)
{
	for (int i = 0; i < numOfTable; i++) {
		if (nameOfTables[i] == _name)
			return tables[i];
	}
	return tables[0];
}

string TableSpace::getNameOfTable(int _tableIndex) {
	return nameOfTables[_tableIndex];
}

void TableSpace::deleteTable(string _name)
{
	int i;
	for (i = 0; i < numOfTable; i++) {
		if (nameOfTables[i] == _name)
			break;
	}
	deleteTable(i);
}

void TableSpace::deleteTable(int _tableIndex)
{
	vector<Table> newTables;
	newTables.assign(tables.begin(), tables.begin()+_tableIndex);
	for (int i = _tableIndex + 1; i < numOfTable; i++) {
		newTables.push_back(tables[i]);
	}
	tables = newTables;
}

int TableSpace::getNumOfTable()
{
	return numOfTable;
}
