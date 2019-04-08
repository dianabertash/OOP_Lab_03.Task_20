#include <iostream>

using namespace std;
#pragma once

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction();
	Fraction(int n, int d);
	~Fraction();
	int GetNumerator() const;
	int GetDenominator() const;
	double Value() const;
	friend bool operator>=(const Fraction &Frac1, const Fraction &Frac2);
	friend Fraction operator+(const Fraction &Frac3, const Fraction &Frac4);
	friend ostream & operator<<(ostream & s, const Fraction &Fract);
};
