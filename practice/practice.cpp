#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "������ char: " << sizeof(char) << " ����" << endl;
	cout << "������ int: " << sizeof(int) << " ����" << endl;
	cout << "������ float: " << sizeof(float) << " ����" << endl;
	cout << "������ double: " << sizeof(double) << " ����" << endl;
}