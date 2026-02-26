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


