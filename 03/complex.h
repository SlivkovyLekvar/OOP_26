#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    
    Complex scitani(const Complex& number);
    Complex odcitani(const Complex& number);
    Complex nasobeni(const Complex& number);

    void SetReal(double r) { real = r; }
    void SetImag(double i) { imag = i; }
    double GetReal() { return real; }
    double GetImag() { return imag; }

    Complex Copy() { return Complex(real, imag);}
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }
    Complex operator+(const Complex& other) { return scitani(other); }
    Complex operator-(const Complex& other) { return odcitani(other); }
    Complex operator*(const Complex& other) { return nasobeni(other); }
    Complex operator+=(const Complex& other) {
        *this = scitani(other);
        return *this;
    }
    Complex operator-=(const Complex& other) {
        *this = odcitani(other);
        return *this;
    }
    Complex operator*=(const Complex& other) {
        *this = nasobeni(other);
        return *this;
    }


};


