#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// условие if
	int n;
	cout << "Введите число: ";
	cin >> n;

	if (n % 2 == 0)
	{
		cout << n << " - четное число.";
	}
	else
	{
		cout << n << " - не четное число.";
	}

	cout << endl;

	int a, b, c, max;
	cout << "Введите три целых числа: ";
	cin >> a >> b >> c;

	if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	if (c >= max)
	{
		max = c;
	}

	cout << "Наибольшее из трех чисел: " << max << endl;

}