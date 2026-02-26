#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) {real = r; imag = i;};
    
    Complex scitani(const Complex& number);
    Complex odcitani(const Complex& number);
    Complex nasobeni(const Complex& number);

    void SetReal(double r);
    void SetImag(double i);
    double GetReal();
    double GetImag();

    Complex(const Complex& c) {real = c.real; imag = c.imag;};

    Complex operator=(const Complex& c);
    Complex operator+(const Complex& c) { return scitani(c); }
    Complex operator-(const Complex& c) { return odcitani(c); }
    Complex operator*(const Complex& c) { return nasobeni(c); }

    Complex operator+=(const Complex& c);
    Complex operator-=(const Complex& c);
    Complex operator*=(double x);
};