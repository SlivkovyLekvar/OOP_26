#include "complex.h"

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1.scitani(c2);
    Complex c4 = c1.odcitani(c2);
    Complex c5 = c1.nasobeni(c2);
    printf("c1: %.2f + %.2fi\n", c1.GetReal(), c1.GetImag());
    printf("c2: %.2f + %.2fi\n", c2.GetReal(), c2.GetImag());
    printf("c1 + c2: %.2f + %.2fi\n", c3.GetReal(), c3.GetImag());
    printf("c1 - c2: %.2f + %.2fi\n", c4.GetReal(), c4.GetImag());
    printf("c1 * c2: %.2f + %.2fi\n", c5.GetReal(), c5.GetImag());

    Complex c6 = c5;
    printf("Copy of c5: %.2f + %.2fi\n", c6.GetReal(), c6.GetImag());  

    Complex c7;
    printf("Default complex number: %.2f + %.2fi\n", c7.GetReal(), c7.GetImag());

    Complex c8;
    c8 = c2;
    printf("Assigned c2 to c8: %.2f + %.2fi\n", c8.GetReal(), c8.GetImag());

    c5 += c2;
    printf("c5 += c2: %.2f + %.2fi\n", c5.GetReal(), c5.GetImag());

    c5 -= c1;
    printf("c5 -= c1: %.2f + %.2fi\n", c5.GetReal(), c5.GetImag());

    c5 *= 2;
    printf("c5 *= c2: %.2f + %.2fi\n", c5.GetReal(), c5.GetImag());
    return 0;
}