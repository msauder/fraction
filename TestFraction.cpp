// TestFraction.cpp
// Test Fraction class definition and implementation files
// Written by Matthew Sauder

#include "Fraction.h"
#include <iostream>
using namespace std;

int main () {
    Fraction defaultFrac;
    int num1, denom1, num2, denom2;
    char slash;
    
    // Test default constructor
    cout << "Default constructor yields ";
    defaultFrac.display();
    
    // Prompt user for a fraction
    cout << "Enter first fraction: ";
    cin >> num1 >> slash >> denom1;
    Fraction frac1(num1, denom1);
    
    // Prompt user for a second fractoin
    cout << "Enter second fraction: ";
    cin >> num2 >> slash >> denom2;
    Fraction frac2(num2, denom2);

    cout << "frac1 = ";
    frac1.display();

    cout << "frac2 = ";
    frac2.display();

    // Test overloaded operator+
    Fraction result;
    result = frac1 + frac2;
    cout << "frac1 + frac2 = ";
    result.display();

    // Test both implementation of overloaded operator*
    frac1 = frac1 * 4;
    frac2 = 11 * frac2;
    cout << "frac1 * 4 = ";
    frac1.display();
    cout << "11 * frac2 = ";
    frac2.display();
    
    // Test overloaded operator>
    if (frac2 > frac1) {
        frac2.display();
        cout << " > ";
        frac1.display();
    }
    else {
        frac1.display();
        cout << " > ";
        frac2.display();
    }
    
    // Test overloaded operator*
    result = frac1 * frac2;
    cout << "frac1 * frac2 = ";
    result.display();

    return 0;
}

