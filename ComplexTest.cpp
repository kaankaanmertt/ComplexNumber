#include<iostream>
using namespace std;

#include "Complex.h"

int main() {

	Complex a(1, 7), b(9, 2), c;

	a.PrintComplex();
	cout << " + ";
	b.PrintComplex();
	cout << " = ";
	c = a.add(b);
	c.PrintComplex();

	cout << endl;

	a.setComplexNumber(10, 1);
	b.setComplexNumber(11, 5);

	a.PrintComplex();
	cout << " - ";
	b.PrintComplex();
	cout << " = ";
	c = a.subtract(b);
	c.PrintComplex();

	cout << endl;

	system("PAUSE");
	return 0;
}