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

    return 0;
}