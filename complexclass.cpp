//
// Created by Dima on 16.12.2020.
//

#include <iostream>
#include <cmath>
#include "complexclass.h"

using namespace std;

ComplexClass::ComplexClass (double r , double i) : re(r), im(i) {};
ComplexClass::ComplexClass (ComplexClass &c) {
    re = c.re;
    im = c.im;
}

double ComplexClass::abs() const {
    return sqrt(re * re - im * im);
}

ComplexClass ComplexClass::operator + (ComplexClass &c) const {
    ComplexClass temp;
    temp.re = re + c.re;
    temp.im = im + c.re;
    return temp;
}

ComplexClass ComplexClass::operator - (ComplexClass &c) const {
    ComplexClass temp;
    temp.re = re - c.re;
    temp.im = im - c.re;
    return temp;
}

ComplexClass ComplexClass::operator * (ComplexClass &c) const {
    ComplexClass temp;
    temp.re = re*c.re;
    temp.im = re*c.im;
    return temp;
}

ComplexClass ComplexClass::operator / (ComplexClass &c) const {
    ComplexClass temp;
    double r = c.re * c.re + c.im * c.im;
    temp.re = (re * c.re + im * c.im) / r;
    temp.re = (im * c.re - re * c.im) / r;
    return temp;
}

ostream &operator<<(ostream &out, const ComplexClass &c) {
    out << c.re;
    if( c.im > 0 )
        out << "+";
    out << c.im << "i";
    return out;
}

istream &operator>>(istream &in, const ComplexClass &c) {
    in >> c.re >> c.im;
    return in;
}