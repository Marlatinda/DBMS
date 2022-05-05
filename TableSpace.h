#pragma once
#include <vector>
#include <string>
#include "Table.h"
using namespace std;

class TableSpace
{
public:
	vector<Table> tables;
	vector<string> nameOfTables;
	// ������ΪtableName�ı�
	void createTable(string tableName);
	// ��ȡ��_tableIndex����Ķ���ʵ��
	Table getTable(int _tableIndex);
	// ��ȡ����Ϊ_name�ı�Ķ���ʵ��
	Table getTable(string _name);
	// ��ȡ��_tableIndex���������
	string getNameOfTable(int _tableIndex);

	// ɾ������Ϊ_name�ı�
	void deleteTable(string _name);
	// ɾ����_tableIndex����
	void deleteTable(int _tableIndex);

	// ��ȡ���������
	int getNumOfTable();

private:
	int numOfTable = 0;
};

