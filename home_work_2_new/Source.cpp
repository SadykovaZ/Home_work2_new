#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "������ �:" << endl;
	int n;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((j == i) || (j > i))
				cout << '*';

			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n1;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n1;

	for (int i = 0; i <= n1; i++)
	{
		for (int j = 0; j <= n1; j++)
		{
			if ((j == i) || (j < i))
				cout << '*';

			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n2;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n2;

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if ((i >= j) || (i + j) >= (n2 - 1))
				cout << ' ';
			else
				cout << '*';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n3;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n3;

	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			if ((i <= j) || (i + j) <= (n3 - 1))
				cout << ' ';
			else
				cout << '*';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n4;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n4;

	for (int i = 0; i < n4; i++)
	{
		for (int j = 0; j < n4; j++)
		{
			if ((i >= j) && (i + j) <= (n4 - 1) || (i <= j) && (i + j) >= (n4 - 1))
				cout << ' ';
			else
				cout << '*';
		}
		cout << endl;
	}

	cout << "������ e:" << endl;
	int n5;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n5;

	for (int i = 0; i < n5; i++)
	{
		for (int j = 0; j < n5; j++)
		{
			if ((i >= j) && (i + j) <= (n5 - 1) || (i <= j) && (i + j) >= (n5 - 1))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n6;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n6;

	for (int i = 0; i < n6; i++)
	{
		for (int j = 0; j < n6; j++)
		{
			if ((i >= j) && (i + j) <= (n6 - 1))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n7;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n7;

	for (int i = 0; i < n7; i++)
	{
		for (int j = 0; j < n7; j++)
		{
			if ((i <= j) && (i + j) >= (n5 - 1))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n8;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n8;
	for (int i = 0; i < n8; i++)
	{
		for (int j = 0; j < n8; j++)
		{
			if ((i + j) <= (n8 - 1))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "������ �:" << endl;
	int n9;
	cout << "������� �������� ���������� ��������:" << endl;
	cin >> n9;
	for (int i = 0; i < n9; i++)
	{
		for (int j = 0; j < n9; j++)
		{
			if ((i + j) >= (n9 - 1))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}

	cout << "1. ������� �� ����� ���� �� ���������" << endl;
	int m = 0, a = 0, i, j;
	cout << "������� �������� ���������� ��������:";
	cin >> a;
	m = a / 2;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (j == m + i || j == m - i)
				cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}

	for (i = m; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (j == m + n - i - 1 || j == i - m)
				cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}

	cout << "2.	������� �� ����� �������� ���������� �����, ������� ���������" << endl;
	int number = 0, count = 0, j1;
	cout << "������� �����:";
	cin >> number;
	cout << "������� �������:";
	cin >> count;

	j1 = number;
	while (count > 0)
	{
		if (j1 % number == 0)
		{
			cout << j1 << endl;
			count--;
		}
		j1++;
	}
	cout << "3.	��� ���� ����� ���������� ���������� ����� �������" << endl;
	int number1 = 0, number2 = 0, j2;
	cout << "������� ������ �����:";
	cin >> number1;
	cout << "������� ������ �����:";
	cin >> number2;

	j2 = (number1>number2)*number1 + (number1<number2)*number2;
	for (int i = j2; i > 0; i++)
	{
		if (i % number1 == 0 && i % number2 == 0)
		{
			j = i;
			break;
		}
	}
	cout << "��� = " << j << endl;


	system("pause");
	return 0;
}