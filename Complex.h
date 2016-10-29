#ifndef COMPLES_H
#define COMPLEX_H
#include<iostream>
using namespace std;

class Complex {

public:

	Complex(double = 0.0 , double = 0.0);
	Complex add(const Complex &);
	Complex subtract(const Complex &);

	void PrintComplex()const;
	void setComplexNumber(double, double);

private:
	double real;
	double imag;

#endif
};