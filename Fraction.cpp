// Fraction.cpp
// Fraction class implementation
// Written by Matthew Sauder

#include "Fraction.h"
#include <iostream>
using namespace std;

// Default constructor
Fraction::Fraction() {
    numerator = 1;
    denominator = 1;
}

// Constructor
Fraction::Fraction(int i, int j) {
    numerator = i;
    denominator = j;
}

// Display fraction
void Fraction::display() {
    cout << numerator << " / " << denominator << endl;
}

// Overload assignment operator
Fraction Fraction::operator=(const Fraction& aFrac) {
    this->numerator = aFrac.numerator;
    this->denominator = aFrac.denominator;
    return *this;
}
// Overload addition operator to add two Fraction instances
Fraction Fraction::operator+(const Fraction& operand) {
	int i;
    int denomResult = denominator;
	i = denomResult;
    // Find lowest common multiple for common denominator
	while(denomResult % operand.denominator != 0)
		denomResult += i;
	int numResult = numerator * denomResult / denominator + operand.numerator * denomResult / operand.denominator;
    Fraction result(numResult, denomResult);
    return result;
}

// Overload multiplication operator to multiply two Fraction instances
Fraction Fraction::operator*(const Fraction& operand) {
    int denomResult = denominator * operand.denominator;
    int numResult = numerator * operand.numerator;
    Fraction result(numResult, denomResult);
    return result;
}

// Overload less than operator to compare two Fraction instances
bool Fraction::operator>(const Fraction& operand) {
    return ((numerator / denominator) > (operand.numerator / operand.denominator));
}

// Overload multiplication operator to multiply Fraction instance by an int (RHS)
Fraction Fraction::operator*(const int aNumber) {
    this->numerator = numerator * aNumber;
    return *this;
}

// Overload multiplication operator to multiply Fraction instance by an int (LHS)
Fraction operator*(const int aNumber, const Fraction& aFrac) {
    Fraction temp;
    temp.numerator = aFrac.numerator * aNumber;
    temp.denominator = aFrac.numerator;
    return temp;
}

