#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

#include <string>

using std::string;

class RationalNumber
{
public:
	RationalNumber();
	RationalNumber(int numerator, int denominator);

	RationalNumber operator+(const RationalNumber& other);
	RationalNumber operator-(const RationalNumber& other);
	RationalNumber operator*(const RationalNumber& other);
	RationalNumber operator/(const RationalNumber& other);
	bool operator==(const RationalNumber& other);
	bool operator!=(const RationalNumber& other);
	bool operator<(const RationalNumber& other);
	bool operator>(const RationalNumber& other);
	bool operator<=(const RationalNumber& other);
	bool operator>=(const RationalNumber& other);
	operator float();
	operator double();

	string ToString();

private:
	int numerator;
	int denominator;

	static int FindGreatestCommonDivisor(int number1, int number2);

	void Reduce();
};

#endif // RATIONAL_NUMBER_H
