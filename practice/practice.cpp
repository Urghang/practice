#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// обмен значений двух числовых переменных
	int a = 5, b = 10;
	cout << "До замены: " << "a = " << a << ", b = " << b << endl;

	a = a + b; // a == 5 + 10 = 15
	b = a - b; // b == 15 - 10 = 5
	a = a - b; // a == 15 - 5 = 10

	cout << "После замены: " << "a = " << a << ", b = " << b << endl;

}