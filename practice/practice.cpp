#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// использование switch, простой калькулятор
	char op;
	float num1, num2;

	cout << "Введите первый операнд: ";
	cin >> num1;
	cout << "Введите оператор: ";
	cin >> op;
	cout << "Введите второй операнд: ";
	cin >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			cout << num1 / num2;
		else
			cout << "Деление на ноль!";
		break;

	default:
		cout << "Неправльный оператор!";
		break;
	}

	cout << endl;

}