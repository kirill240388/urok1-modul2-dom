#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cout << "������� � �������" << endl;
	cin >> task;
	if (task == 1)

	{
		/*1.	���� �����������(����� ���������������) �����, � � ����� ������������� ����� d.��������� ������� q � ������� r ��� �������, � �� d*/
			int a, d, q, r;
		cout << "������� ����� �" << endl;
		cin >> a;
		cout << "������� ����� d" << endl;
		cin >> d;
		q = a / d;
		r = a%d;
		cout << "������� q=" << q << endl;
		cout << "������� �� ������� r = " << r << endl;

	}
	if (task == 2)

	{
		/*2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12 / x, ���� y ����� 0, 12 / y,
		���� x ����� 0, ����� 144 / (x*y).*/
		int x, y;
		cout << "������� ����� x""\n";
		cin >> x;
		cout << "������� ����� y""\n";
		cin >> y;
		if ((x = 0) && (y = 0))
			cout << "f= " << 0 << endl;
		else if (y == 0)
			cout << "f= " << 12 / x << endl;
		else if (x == 0)
			cout << "f= " << 12 / y << endl;
		else
			cout << "f= " << 144 / (x*y) << endl;
	}
	if (task == 3)
	{
		/*3.	�������� ������� int f(int x, int y), ������� ���������� x - y, ���� x ������ y, ����� ���������� y - x*/
		int x, y;
		cout << "������� ����� x" << endl;
		cin >> x;
		cout << "������� ����� y" << endl;
		cin >> y;
		if (x > y)
			cout << "f= " << x - y << endl;
		else
			cout << "f= " << y - x << endl;

	}
	if (task == 4)
	{
		/*4.	�������� ������� double f(double x, double y), ������� ���������� x / y, ���� x ������ y, ����� ���������� y / x.
		��������������, ��� �������� ���������� ������ ����.*/
		double x, y;
		cout << "������� ����� x" << endl;
		cin >> x;
		cout << "������� ����� y" << endl;
		cin >> y;
		if (x > y)
			cout << "f= " << x / y << endl;
		else
			cout << "f= " << y / x << endl;
	}

	if (task == 5)
	{
		/*5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n / k, ��� k ���� ������� �� ����� x, y, z,
			� m � n ���� ������� � ������� �� ���� �����.��������������, ��� �������� ���������� ������ ����*/
		double x, y, z, k, n, m;
		cout << "������� ����� x"<<endl;
		cin >> a;
		cout << "������� ����� y"<<endl;
		cin >> b;
		cout << "������� ����� z"<<endl;
		cin >> c;
		if ((a < b) && (a < c))
			k = a;
		else if ((b < a) && (b < c))
			k = b;
		else if ((c < a) && (c < b))
			k = c;

		if ((a > b) && (a > c))
			n = a;
		else if ((b > a) && (b > c))
			n = b;
		else if ((c > a) && (c > b))
			n = c;
		if ((a < b) && (a > c))
			m = a;
		else if ((b < a) && (b > c))
			m = b;
		else if ((c < a) && (c > b))
			m = c;
		cout << m*n / k << endl;

	}
	if (task == 6)
	{
		/*6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.*/
		int a, b, c;
		cout << "������� ����� �"<<endl;
		cin >> a;
		cout << "������� ����� b"<<endl;
		cin >> b;
		cout << "������� ����� c"<<endl;
		cin >> c;
		if ((a < b) && (a < c))
			cout << "min= " << a <<endl;
		else if ((b < a) && (b < c))
			cout << "min= " << b <<endl;
		else cout << "min= " << c <<endl;
	}
	if (task == 7)
		/*7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.*/
	{
		int a, b, c;
		cout << "������� ����� �"<<endl;
		cin >> a;
		cout << "������� ����� b"<<endl;
		cin >> b;
		cout << "������� ����� c"<<endl;
		cin >> c;
		if ((a > b) && (a > c))
			cout << "max= " << a <<endl;
		else if ((b > a) && (b > c))
			cout << "max= " << b <<endl;
		else cout << "max= " << c <<endl;
	}
	if (task == 8)
	{
		/*8.	�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2 + �2 = z2, ����� ���������� false*/
		int x, y, z;
		cout << "������� ����� x"<<endl;
		cin >> x;
		cout << "������� ����� y"<<endl;
		cin >> y;
		cout << "������� ����� z"<<endl;
		cin >> z;
		if (x*x + y*y == z*z)
			cout << "true"<<endl;
		else cout << "false"<<endl;


	}
	




	return 0;

	system("pause");




}
