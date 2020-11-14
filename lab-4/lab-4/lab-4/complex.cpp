#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex(float _real, float _imag) {
 setValue(_real, _imag);
};

float Complex::getReal() {
 return real;
};

void Complex::setReal(float _real) {
 real = _real;
};

float Complex::getImag() {
 return imag;
}

void Complex::setImag(float _imag) {
 imag = _imag;
};

void Complex::setValue(float _real, float _imag) {
 real = _real;
 imag = _imag;
};

void Complex::print() {
 cout << "(" << real << "," << imag << ")";
}

bool Complex::isReal() {
 return imag == 0;
};

bool Complex::isImaginary() {
 return real == 0;
};

void Complex::Add(Complex complex) {
 real += complex.getReal();
 imag += complex.getImag();
}
