#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// обмен значений двух числовых переменных
	int a = 5, b = 10, temp;
	cout << "До замены: " << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;
	cout << "После замены: " << "a = " << a << ", b = " << b << endl;

}