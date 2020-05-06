#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Размер char: " << sizeof(char) << " байт" << endl;
	cout << "Размер int: " << sizeof(int) << " байт" << endl;
	cout << "Размер float: " << sizeof(float) << " байт" << endl;
	cout << "Размер double: " << sizeof(double) << " байт" << endl;
}