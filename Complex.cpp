#include<iostream>
using namespace std;

#include "Complex.h"

Complex::Complex(double real, double imag) {
	setComplexNumber(real, imag);
}

Complex Complex::add(const Complex &x) {
	Complex temp;
	temp.setComplexNumber((real + x.real), (imag + x.imag));
	return temp;
}

Complex Complex::subtract(const Complex &y) {
	Complex temp;
	temp.setComplexNumber((real - y.real), (imag - y.imag));
	return temp;
}

void Complex::PrintComplex()const {
	cout << '(' << real << "," << imag << ')' ;
}

void Complex::setComplexNumber(double first, double second) {
	real = first;
	imag = second;
}