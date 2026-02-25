#include "zvire.h"

// Constructor definitions
Zvire::Zvire() {
    // Initialize members
}

int Zvire::jez(int jidlo) {
    if (!zije()) return 0;
    return zaludek += jidlo;
}

int Zvire::vymesuj(int objem) {
    if ((zaludek-=objem) <= 0) {
        zaludek = 0;
    }
    return zaludek;
}

// Destructor (if needed)
Zvire::~Zvire() {
    // Cleanup if necessary
}