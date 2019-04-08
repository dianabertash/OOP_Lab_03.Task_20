#include <fstream>
#include<iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	cout << "Fraction::Fraction()" << endl;
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int n, int d)
{
	cout << "Fraction::Fraction(int n, int d)" << endl;
	this->numerator = n;
	this->denominator = d;
}


Fraction::~Fraction()
{
	cout << "Fraction::~Fraction()" << endl;
}

int Fraction::GetNumerator() const
{
	return this->numerator;
}

int Fraction::GetDenominator() const
{
	return this->denominator;
}

double Fraction::Value() const
{
	return (((double)this->numerator) / ((double)this->denominator));
}

bool operator>=(const Fraction &Frac1, const Fraction &Frac2)
{
	double first = Frac1.Value();
	double second = Frac2.Value();

	return first >= second;
}

Fraction operator+(const Fraction &Frac3, const Fraction &Frac4)
{
	int n = Frac3.GetNumerator()*Frac4.GetDenominator() + Frac4.GetNumerator()*Frac3.GetDenominator();
	int d = Frac3.GetDenominator()*Frac4.GetDenominator();

	return Fraction(n, d);
}

ostream & operator <<(ostream & s, const Fraction &Fract)
{
	s << "Numerator: " << Fract.GetNumerator() << " Denominator: " << Fract.GetDenominator() << endl;
	return s;
}


