#include "Table.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

// ��������������Ϊ �������������֣�������������
void Table::createTable(int _colNum, vector<string> _colName, vector<string> _colType) {
	colNum = _colNum;
	colName.assign(_colName.begin(), _colName.end());
	colType.assign(_colType.begin(), _colType.end());
}

// ����һ��
void Table::insertRow(vector<string> _row) {
	cols.push_back(_row);
	rowNum++;
}

// ��ӡ�������
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