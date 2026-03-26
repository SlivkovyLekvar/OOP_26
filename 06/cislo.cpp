#include "cislo.h"

Cislo::Cislo() {
    valueR = 0;
    valueI = 0;
}

Cislo::Cislo(double a, double b = 0) {
    valueR = a;
    valueI = b;
}

Cislo Cislo::operator+(Cislo x) {
    Cislo newCislo;
    newCislo.valueR = valueR + x.valueR;
    newCislo.valueI = valueI + x.valueI;
    return newCislo;
}

KomplexniCislo KomplexniCislo::operator+(KomplexniCislo c) {
    KomplexniCislo newC;
    return newC;
}

RealneCislo RealneCislo::operator+(RealneCislo b) {
    RealneCislo newR;
    return newR;
}

CeleCislo CeleCislo::operator+(CeleCislo a) {
    CeleCislo newA;
    return newA;
}