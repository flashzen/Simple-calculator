// simplecalculator.cpp

#include <iostream>
#include <cmath>
#include <stdio.h>
#include < cstdio >
using namespace std;


static int calc()
{
	cout << "Welcome to my simple 2 number calculator project!\n";
	cout << "Enter 2 numbers, followed by the operation ( * , /, %, +, -)\n";
	int a, b, x;

	string sign;
	cin >> a >> b;
	if (cin.fail()) {
		cout << "invalid";
		return false;
	}
	cin >> sign;

	if (sign == "*")
		cout << a * b << "\n";
	else if (sign == "/")
		cout << a / b << "\n";
	else if (sign == "%")
		cout << a % b << "\n";
	else if (sign == "+")
		cout << a + b << "\n";
	else if (sign == "-")
		cout << a + b << "\n";
	else if (sign != "-" || sign != "/" || sign != "%" || sign != "+" || sign != "-")
		cout << "invalid" << endl;

	cout << "Made with <3 by flash\n";
	cout << "Press any key to continue..";
	getchar();
	return true;
}

int main()
{
	calc();
	getchar();
	return true;
}