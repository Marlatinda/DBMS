#pragma once
#include <string>
#include <vector>
using namespace std;

class Table
{

public:
	int colNum, rowNum = 0;   // colNum 列数  rowNum 行数
	vector<string> colName;   // 每一列的名字（ID，姓名等）
	vector<string> colType;	  // 每一列的数据类型
	vector< vector<string> > cols;  // 表的所有内容数据

	void createTable(int _colNum, vector<string> _colName, vector<string> _colType);
	void insertRow(vector<string> _row);
	void printTable();

private:
	vector<string>::iterator it;
};

