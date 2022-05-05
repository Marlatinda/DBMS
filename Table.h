#pragma once
#include <string>
#include <vector>
using namespace std;

class Table
{

public:
	int colNum, rowNum = 0;   // colNum ����  rowNum ����
	vector<string> colName;   // ÿһ�е����֣�ID�������ȣ�
	vector<string> colType;	  // ÿһ�е���������
	vector< vector<string> > cols;  // ���������������

	void createTable(int _colNum, vector<string> _colName, vector<string> _colType);
	void insertRow(vector<string> _row);
	void printTable();

private:
	vector<string>::iterator it;
};

