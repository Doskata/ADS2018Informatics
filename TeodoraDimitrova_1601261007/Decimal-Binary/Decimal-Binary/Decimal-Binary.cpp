#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);
long long convertDecimalToBinary(int);

int main()
{
	long long n;

	cout << "Enter a binary number: ";
	cin >> n;

	cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal" << endl;

	int m, binaryNumber;
	cout << "Enter a decimal number: ";
	cin >> m;
	binaryNumber = convertDecimalToBinary(m);
	cout << m << " in decimal = " << binaryNumber << " in binary" << endl;

	return 0;
}

int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}

long long convertDecimalToBinary(int m)
{
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (m != 0)
	{
		remainder = m % 2;
		cout << "Step " << step++ << ": " << m << "/2, Remainder = " << remainder << ", Quotient = " << m / 2 << endl;
		m /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}



