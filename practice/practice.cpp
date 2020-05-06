#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// sizeof возвращает размер типа либо объекта
	cout << "Размер char: " << sizeof(char) << " байт" << endl;
	cout << "Размер int: " << sizeof(int) << " байт" << endl;
	cout << "Размер float: " << sizeof(float) << " байт" << endl;
	cout << "Размер double: " << sizeof(double) << " байт" << endl;
	cout << "Размер bool: " << sizeof(bool) << " байт" << endl;

	// приведение типа
	char c;
	cout << "Введите символ: ";
	cin >> c;
	cout << "ASCII-значение: " << int(c) << endl;
}