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

	// ��������������Ϊ �������������֣�������������
	void createTable(int _colNum, vector<string> _colName, vector<string> _colType);
	// ����һ��
	void insertRow(vector<string> _row);
	// �޸�ĳһ������ (����rowindex��0��ʼ)
	void changeRow(int _rowIndex, vector<string> _row);
	// �޸�ĳһ�еĵ�i������ ������index�������Ǵ�0��ʼ��
	void changeRow(int _rowIndex, int _colIndex, string newdata);
	// ��ȡĳһ������
	vector<string> getRow(int _rowIndex);
	// ��ȡ��_colIndex������Ϊ_data����һ�е��к�
	int getRowIndex(int _colIndex, string _data);
	// ��ӡ�������
	void printTable();

private:
	vector<string>::iterator it;
};

