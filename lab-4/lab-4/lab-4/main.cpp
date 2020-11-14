#include <iostream>
#include "complex.h"
using namespace std;

Complex Add(Complex c1, Complex c2);

int main()
{
 Complex c;
 c.print();
 Complex a(1.2, 0);
 Complex b(0, -2);
 cout << a.isReal() << "\n";
 cout << a.isImaginary() << "\n";
 cout << b.isReal() << "\n";
 cout << b.isImaginary() << "\n";
 a.Add(b);
 a.print();
 Add(a, b).print();
}

Complex Add(Complex c1, Complex c2) {
 Complex result = c1;
 c1.Add(c2);
 return c1;
};
