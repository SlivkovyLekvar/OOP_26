#include "zoo.h"

namespace MojeZOO {

// ======================= ZVIRE =======================

Zvire::Zvire() {
    jmeno = nullptr;
    vek = 0;
    obsahZaludku = 0;
    puvod = origin::nezname;
    oblast = enviroment::nezname;
}

Zvire::Zvire(const char* j, origin o, enviroment e, int n, int z) {
    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }

    vek = n;
    obsahZaludku = z;
    puvod = o;
    oblast = e;
}

Zvire::~Zvire() {
    delete[] jmeno;
}

const char* Zvire::GetJmeno() const {
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

int Zvire::GetVek() {
    return vek;
}

bool Zvire::Zije() {
    return obsahZaludku > 0 && vek <= delkaZivota;
}

origin Zvire::GetPuvod() {
    return puvod;
}

enviroment Zvire::GetOblast() {
    return oblast;
}

Zvire::Zvire(const Zvire& vzor) {
    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno) + 1];
        strcpy(jmeno, vzor.jmeno);
    } else {
        jmeno = nullptr;
    }

    vek = vzor.vek;
    obsahZaludku = vzor.obsahZaludku;
    puvod = vzor.puvod;
    oblast = vzor.oblast;
    delkaZivota = vzor.delkaZivota;
}

Zvire& Zvire::operator=(const Zvire& vzor) {
    if (this == &vzor) return *this;

    delete[] jmeno;

    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno) + 1];
        strcpy(jmeno, vzor.jmeno);
    } else {
        jmeno = nullptr;
    }

    vek = vzor.vek;
    obsahZaludku = vzor.obsahZaludku;
    puvod = vzor.puvod;
    oblast = vzor.oblast;
    delkaZivota = vzor.delkaZivota;

    return *this;
}

// ======================= SAVEc =======================

void Savec::Jez(int jidlo) {
    obsahZaludku += jidlo * 2;
    vek++;
}


// ======================= PTAK =======================

void Ptak::Jez(int jidlo) {
    obsahZaludku += jidlo / 2;
    vek++;
}


// ======================= PLAZ =======================

void Plaz::Jez(int jidlo) {
    obsahZaludku += jidlo + 2;
    vek++;
}


// ======================= OSETROVATEL =======================

Osetrovatel::Osetrovatel() {
    jmeno = nullptr;
}

Osetrovatel::~Osetrovatel() {
    delete[] jmeno;
}

const char* Osetrovatel::GetJmeno() {
    return jmeno;
}

void Osetrovatel::SetJmeno(const char* j) {
    delete[] jmeno;

    if (j) {
        jmeno = new char[strlen(j) + 1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }
}

void Osetrovatel::PridatZvire(Zvire& z) {
    mojeZvirata.push_back(&z);
}

void Osetrovatel::NastavSoubor(const char* s) {
    if (s) sesit = s;
}

void Osetrovatel::ZapisKrmeni(Zvire& z, int jidlo) {
    std::ofstream f(sesit, std::ios::app);
    if (!f) return;

    f << "Krmeni: " << (z.GetJmeno() ? z.GetJmeno() : "nezname")
      << " jidlo: " << jidlo << "\n";
}

void Osetrovatel::ZapisPoznamku(const char* text) {
    std::ofstream f(sesit, std::ios::app);
    if (!f) return;

    f << "Poznamka: " << text << "\n";
}

// ======================= VYBEH =======================

Vybeh::Vybeh() {
    noOsetrovatelu = 0;
}

Vybeh::~Vybeh() {}

int Vybeh::PocetZivych() {
    int pocet = 0;
    for (auto z : zvirata) {
        if (z->Zije()) pocet++;
    }
    return pocet;
}

Zvire& Vybeh::GetZvire(int index) {
    return *zvirata.at(index);
}

}