//Complex.h
 
#ifndef COMPLEX_H_
#define COMPLEX_H_
 
#include <iostream>

class Complex
{
	private:
			int real, imaginary;
	public:		
			
			Complex() : real(0), imaginary(0) {}
			
			Complex(const int &r, const int &i) : real(r), imaginary(i) {}
			
			void display() const;
			
			Complex operator+(const Complex &c) const
			{
				return Complex(real + c.real, imaginary + c.imaginary);
			}
			Complex operator-(const Complex &c) const
			{
				return Complex(real - c.real, imaginary - c.imaginary);
			}
};
#endif			
				
			
			
			
	