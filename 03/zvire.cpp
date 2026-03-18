#include "zvire.h"
#include <cstring>

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

int Zvire::stari() {
    if (!zije()) {
        printf("Zvíře je již mrtvé.\n");
        return 0;
    }
    return zaludek;
}

//copy constructor
Zvire::Zvire(const Zvire& vzor) {
    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno) + 1];
        strcpy(jmeno, vzor.jmeno);
    } else {
        jmeno = nullptr;
    }
}

// constructor
Zvire::Zvire(const char* j) {
    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }
}

const char* Zvire::GetJmeno() {
    return jmeno;
}

void Zvire::SetJmeno(const char* j) {
    delete[] jmeno;
    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }
}

Zvire::~Zvire() {
    delete[] jmeno;
}

Zvire& Zvire::operator=(const Zvire& vzor) {
    zaludek = vzor.zaludek;
    return *this;
}


