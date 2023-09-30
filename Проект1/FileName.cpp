#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x;
	cout << "Введіть значення x:";
	cin >> x;
	double y = 4 * (pow(x - 3), 6) - (pow(x - 3), 3) + 2;
	cout << "Значення функціїмпри x=" << x << "дорівнює" << y << endl;
	system("pause");
	return 0;
}