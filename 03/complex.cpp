#include "complex.h"

Complex Complex::scitani(const Complex &number){
    return Complex(real + number.real, imag + number.imag);
};

Complex Complex::odcitani(const Complex &number){
    return Complex(real - number.real, imag - number.imag);
};

Complex Complex::nasobeni(const Complex &number){
    return Complex(real * number.real - imag * number.imag, real * number.imag + imag * number.real);
};

void Complex::SetReal(double r) { real = r; };

void Complex::SetImag(double i) { imag = i; };

double Complex::GetReal() { return real; };

double Complex::GetImag() { return imag; };

Complex Complex::Copy(Complex c) { return Complex(c.GetReal(), c.GetImag()); };


