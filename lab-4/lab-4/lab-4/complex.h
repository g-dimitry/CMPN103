#pragma once

class Complex {
private:
 float real = 0;
 float imag = 0;
public:
 Complex(float _real = 0, float _imag = 0);
 float getReal();
 void setReal(float _real);;
 float getImag();
 void setImag(float _imag);
 void setValue(float _real, float _imag);
 void print();
 bool isReal();
 bool isImaginary();
 void Add(Complex complex);
};
