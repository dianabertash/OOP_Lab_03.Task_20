#include <fstream>
#include <iostream>
#include "Fraction.h"

using namespace std;

void SortArray(Fraction** Fract, int n);
double AverageValue(Fraction** Fract, int n);

void main()
{
	Fraction a(3, 5);
	Fraction b(4, 16);
	Fraction c = (a + b);
	cout << a;
	cout << b;
	cout << "(a >= b):" << (a >= b) << endl;
	cout << "(a + b):" << c.GetNumerator() << "/" << c.GetDenominator() << endl;

	const int NumberOfFraction = 5;
	Fraction** Fract = new Fraction*[NumberOfFraction];
	Fract[0] = new Fraction(1, 2);
	Fract[1] = new Fraction(2, 3);
	Fract[2] = new Fraction(1, 3);
	Fract[3] = new Fraction(5, 7);
	Fract[4] = new Fraction(2, 8);

	cout << "Fraction array before sorting: " << endl;
	for (int i = 0; i < NumberOfFraction; i++)
	{
		cout << i + 1 << ": " << Fract[i]->GetNumerator() << "/" << Fract[i]->GetDenominator() << endl;
	}

	SortArray(Fract, NumberOfFraction);


	cout << "Fraction array after sorting: " << endl;
	for (int i = 0; i < NumberOfFraction; i++)
	{
		cout << i + 1 << ": " << Fract[i]->GetNumerator() << "/" << Fract[i]->GetDenominator() << endl;
	}

	double Average = AverageValue(Fract, NumberOfFraction);
	cout << "Average: " << Average << endl;

	for (int i = 0; i < NumberOfFraction; i++)
	{
		delete Fract[i];
	}

	delete[] Fract;
	system("pause");
}


void SortArray(Fraction** Fract, int n)
{
	Fraction *temp;

	for (int j = 0; j < (n - 1); j++)
	{
		if (Fract[j]->Value() > Fract[j + 1]->Value())
		{
			temp = Fract[j];
			Fract[j] = Fract[j + 1];
			Fract[j + 1] = temp;
		}
	}
}

double AverageValue(Fraction** Fract, int n)
{
	double k = 0.0;
	for (int i = 0; i < n; i++)
	{
		k += Fract[i]->Value();
	}

	double result = k / ((double)n);

	return result;
}