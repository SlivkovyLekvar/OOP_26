#include "zvire.h"
#include <cstring>

Zvire::Zvire() {
    jmeno = nullptr;
    zaludek = 1; 
    delka_zivota = 10;
}

Zvire::Zvire(int z, const char* j) {
    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }
    zaludek = z; 
    delka_zivota = 10;
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
    zaludek = vzor.zaludek;
    delka_zivota = vzor.delka_zivota;
}

// constructor
Zvire::Zvire(const char* j) {
    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
        zaludek = 0;
        delka_zivota = 0;
    }
    zaludek = 1;
    delka_zivota = 10;
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
    if (this == &vzor) return *this;

    zaludek = vzor.zaludek;
    delka_zivota = vzor.delka_zivota;
    SetJmeno(vzor.jmeno);
    return *this;
}

int Savec::jez(int jidlo) {
    if (!zije()) return 0;
    return zaludek += jidlo*2;
}

int Ptak::jez(int jidlo) {
    if (!zije()) return 0;
    return zaludek += jidlo/2;
}

int Ryba::jez(int jidlo) {
    if (!zije()) return 0;
    return zaludek += jidlo+2;
}

bool Zvire::zije() {
    if (zaludek<=0) return false;
    if (zaludek > delka_zivota) return false;
    return true;
}