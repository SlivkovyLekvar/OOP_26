#include "zvire.h"
#include <cstring>

int Zvire::jez(int jidlo) {
    if (!zije()) return 0;
    vek++;
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
    return vek;
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

//copy constructor
Zvire::Zvire(const Zvire& vzor) {
    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno) + 1];
        strcpy(jmeno, vzor.jmeno);
    } else {
        jmeno = nullptr;
    }
}

const char* Zvire::GetJmeno() {
    return jmeno;
}

Zvire::~Zvire() {
    delete[] jmeno;
}

void Zvire::SetJmeno(const char* jmeno) {
    if (jmeno == nullptr) {
        this->jmeno = nullptr;
        return;}
    delete[] this->jmeno; 
    this->jmeno = new char[strlen(jmeno) + 1];
    strcpy(this->jmeno, jmeno);
}


