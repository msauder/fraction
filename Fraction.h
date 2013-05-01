// Fraction.h
// Fraction class definition
// Written by Matthew Sauder

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
    private:
     // Data members
     int numerator;
     int denominator;

    public:
     // Default constructor
     Fraction();

     // Constructor
     Fraction(int i, int j);

     // Display fraction
     void display();

     // Overload assignment operator
     Fraction operator=(const Fraction&);

     // Overload addition operator to add two Fraction instances
     Fraction operator+(const Fraction&);

     // Overload multiplication operator to multiply two Fraction instances
     Fraction operator*(const Fraction&);

     // Overload less than operator to compare two Fraction instances 
     bool operator>(const Fraction&);

     // Overload multiplication operator to multiply Fraction instance by an int (LHS or RHS)
     Fraction operator*(const int);
     friend Fraction operator*(const int, const Fraction&);
};

#endif

