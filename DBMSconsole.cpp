#include <iostream>
#include <vector>
#include "Table.h"
using namespace std;

int main()
{
	Table table;  // 表对象
	int colNum;
	vector<string> colName, colType;

	// 测试创建表
	cout << "输入插入表的列数： ";
	cin >> colNum;
	for (int i = 0; i < colNum; i++) {
		cout << "输入第 " << i+1 << " 列的列名: ";
		string name;
		cin >> name;
		colName.push_back(name);

		cout << "输入第 " << i+1 << " 列的数据类型: ";
		string _type;
		cin >> _type;
		colType.push_back(_type);
	}
	cout << endl;

	table.createTable(colNum, colName, colType);

	table.printTable();

	// 测试插入表内容
	int insertRowCount;
	cout << "输入插入几行： ";
	cin >> insertRowCount;
	for (int i = 0; i < insertRowCount; i++) {
		cout << "输入插入的第" << i+1 << "行的数据："<<endl;
		vector<string> thisRow;
		string s;
		for (int j = 0; j < colNum; j++) {
			cin >> s;
			thisRow.push_back(s);
		}
		table.insertRow(thisRow);
	}

	table.printTable();
}