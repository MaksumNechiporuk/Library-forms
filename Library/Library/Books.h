#pragma once

#include<ctime>
#include<iomanip>
#include<string>
#include "Data.h"

using namespace std;

struct book
{
	string name;
	Data d;
	int number;
	string genre;//enum  
	bool status;

	void Fill_book()
	{
		string names[10] = { " �� ��������� ����� ��� ���","����","���������, ������, �����, ���������","������","������� ������ ����","������� �� ��� ������","�������� �����"," ������� ������� ����� ������","������� �����","1984" };
		name = names[rand() % 10];
		int a = rand() % 10;
		if (a == 0)
		{
			number = 0;
			status = false;
		}
		else
		{
			number = 1 + rand() % 100;
			status = true;
		}
		string genres[6] = { "�����������","��������","����������","�������������","�������-������������","�����" };
		genre = genres[rand() % 6];
		d.Fill_data(1960, 2018);
	}
};