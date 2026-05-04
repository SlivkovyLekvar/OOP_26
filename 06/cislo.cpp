#include "cislo.h"
#include <cstdio>

Cislo::Cislo() {
    valueR = 0;
    valueI = 0;
}

Cislo::Cislo(double a, double b) {
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
    newC = KomplexniCislo(c.GetR()+GetR(), c.GetI()+GetI());
    printf("Scitam komplexni cisla.... vysledek: %.2f + %.2fi", newC.GetR(), newC.GetI());
    return newC;
}

RealneCislo RealneCislo::operator+(RealneCislo r) {
    RealneCislo newR;
    newR = RealneCislo(r.GetR() + GetR());
    printf("Scitam realni cisla.... vysledek: %.2f", newR.GetR());
    return newR;
}

CeleCislo CeleCislo::operator+(CeleCislo z) {
    CeleCislo newZ;
    newZ = CeleCislo(static_cast<double>(z.GetR() + GetR()));
    return newZ;
}