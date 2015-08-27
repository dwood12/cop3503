
#ifndef COMPLEX_H_
#define COMPLEX_H_


#include <iostream>
using namespace std;

class Complex {

  double real;
  double img;

 public:

 Complex() : real(0), img(0) {}
 Complex(int i) : real(i), img(0) {}
 Complex(double d) : real(d), img(0) {}
 Complex(double r, double i) : real(r), img(i) {}
 Complex(const Complex& c) : real(c.real), img(c.img) {}
 Complex(Complex&& c) : real(c.real), img(c.img) {} 

 Complex complexFromPolar(double rho, double theta);
 
 Complex operator+(const Complex& c);
 Complex operator-(const Complex& c);
 Complex operator*(const Complex& c);
 Complex operator/(const Complex& c);

 Complex& operator+=(Complex& rhs);
 Complex& operator-=(Complex& rhs);
 Complex& operator*=(Complex& rhs);
 Complex& operator/=(Complex& rhs);

 double getReal() {return real;}
 double getImg() {return img;}
 double getRho();
 double getTheta();

 std::string string();
 std::string stringCart();
 std::string stringPolar();
 
 friend ostream& operator<<(ostream& os, Complex& c) {
   os << c.string();
   return os;
     }
 friend istream& operator>>(istream& is, Complex& c) {
   char plus_or_minus;
   char i;
   is >> c.real >> plus_or_minus >> c.img >> i;
   return is;
 }

 bool operator==(Complex& rhs);
 bool operator!=(Complex& rhs);
 bool operator<(Complex& rhs);
 bool operator<=(Complex& rhs);
 bool operator>(Complex& rhs);
 bool operator>=(Complex& rhs);

};

#endif

