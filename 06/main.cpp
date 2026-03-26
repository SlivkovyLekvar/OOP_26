#include "zvire.h"
#include "cislo.h"

int main() {
    //staticka alokace
    Savec Amalka;
    printf("Amalka ma: %d\n", Amalka.stari());
    Amalka.jez(5);
    printf("Amalka ma: %d\n", Amalka.stari());
    Amalka.jez(5);
    printf("Amalka ma: %d\n", Amalka.stari());
    Ptak Dodo;
    printf("Dodo ma: %d\n", Dodo.stari());
    Dodo.jez(10);
    printf("Dodo ma: %d\n", Dodo.stari());
    Dodo.jez(10);
    printf("Dodo ma: %d\n", Dodo.stari());
    Ryba Rak;
    Rak.jez(50);
    printf("Rak ma: %d\n", Rak.stari());
    Rak.jez(50);
    printf("Rak ma: %d\n", Rak.stari());

    //dynamicka alokace

    //cisla
    Cislo a(5);

    return 0;
}