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
	cout << "Введите № задания" << endl;
	cin >> task;
	if (task == 1)

	{
		/*1.	Дано натуральное(целое неотрицательное) число, а и целое положительное число d.Вычислить частное q и остаток r при делении, а на d*/
			int a, d, q, r;
		cout << "Введите число а" << endl;
		cin >> a;
		cout << "Введите число d" << endl;
		cin >> d;
		q = a / d;
		r = a%d;
		cout << "Частное q=" << q << endl;
		cout << "Остаток от деления r = " << r << endl;

	}
	if (task == 2)

	{
		/*2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12 / x, если y равен 0, 12 / y,
		если x равен 0, иначе 144 / (x*y).*/
		int x, y;
		cout << "Введите число x""\n";
		cin >> x;
		cout << "Введите число y""\n";
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
		/*3.	Напишите функцию int f(int x, int y), которая возвращает x - y, если x больше y, иначе возвращает y - x*/
		int x, y;
		cout << "Введите число x" << endl;
		cin >> x;
		cout << "Введите число y" << endl;
		cin >> y;
		if (x > y)
			cout << "f= " << x - y << endl;
		else
			cout << "f= " << y - x << endl;

	}
	if (task == 4)
	{
		/*4.	Напишите функцию double f(double x, double y), которая возвращает x / y, если x больше y, иначе возвращает y / x.
		Предполагается, что значения параметров больше нуля.*/
		double x, y;
		cout << "Введите число x" << endl;
		cin >> x;
		cout << "Введите число y" << endl;
		cin >> y;
		if (x > y)
			cout << "f= " << x / y << endl;
		else
			cout << "f= " << y / x << endl;
	}

	if (task == 5)
	{
		/*5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n / k, где k есть меньшее из чисел x, y, z,
			а m и n есть среднее и большее из этих чисел.Предполагается, что значения параметров больше нуля*/
		double x, y, z, k, n, m;
		cout << "Введите число x"<<endl;
		cin >> a;
		cout << "Введите число y"<<endl;
		cin >> b;
		cout << "Введите число z"<<endl;
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
		/*6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.*/
		int a, b, c;
		cout << "Введите число а"<<endl;
		cin >> a;
		cout << "Введите число b"<<endl;
		cin >> b;
		cout << "Введите число c"<<endl;
		cin >> c;
		if ((a < b) && (a < c))
			cout << "min= " << a <<endl;
		else if ((b < a) && (b < c))
			cout << "min= " << b <<endl;
		else cout << "min= " << c <<endl;
	}
	if (task == 7)
		/*7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.*/
	{
		int a, b, c;
		cout << "Введите число а"<<endl;
		cin >> a;
		cout << "Введите число b"<<endl;
		cin >> b;
		cout << "Введите число c"<<endl;
		cin >> c;
		if ((a > b) && (a > c))
			cout << "max= " << a <<endl;
		else if ((b > a) && (b > c))
			cout << "max= " << b <<endl;
		else cout << "max= " << c <<endl;
	}
	if (task == 8)
	{
		/*8.	Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2 + у2 = z2, иначе возвращает false*/
		int x, y, z;
		cout << "Введите число x"<<endl;
		cin >> x;
		cout << "Введите число y"<<endl;
		cin >> y;
		cout << "Введите число z"<<endl;
		cin >> z;
		if (x*x + y*y == z*z)
			cout << "true"<<endl;
		else cout << "false"<<endl;


	}
	




	return 0;

	system("pause");




}
