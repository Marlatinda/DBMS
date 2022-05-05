#include "Table.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

// 创建表，参数依次为 列数，各列名字，各列数据类型
void Table::createTable(int _colNum, vector<string> _colName, vector<string> _colType) {
	colNum = _colNum;
	colName.assign(_colName.begin(), _colName.end());
	colType.assign(_colType.begin(), _colType.end());
}

// 插入一行
void Table::insertRow(vector<string> _row) {
	cols.push_back(_row);
	rowNum++;
}

// 打印表的内容
void Table::printTable() {
	vector<string>::iterator it;

	cout << " |";
	for (it = colName.begin(); it != colName.end(); it++) {
		cout << *it << " | ";
	}
	cout << endl;

	cout << " |";
	for (it = colType.begin(); it != colType.end(); it++) {
		cout << *it << " | ";
	}
	cout << endl;

	for (int i = 0; i < rowNum; i++) {
		cout << " |";
		vector<string> thisRow;
		thisRow.assign(cols[i].begin(), cols[i].end());
		for (it = thisRow.begin(); it != thisRow.end(); it++) {
			cout << *it << " | ";
		}
		cout << endl;
	}
	cout << endl;
}