#include <iostream>
#include <string>

class Zvire {
protected:
    int zaludek;
    char* jmeno;
    int delka_zivota;

public:
    Zvire();
    Zvire(int z, const char* j);

    bool zije();
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();

    //copy constructor
    Zvire(const Zvire& vzor);
    //constructor
    Zvire(const char* j);

    //Get, Set, destructor
    const char* GetJmeno();
    void SetJmeno(const char* j);
    ~Zvire();

    Zvire& operator=(const Zvire& vzor);
};

class Savec : public Zvire {
public:
    Savec() {delka_zivota = 20;}
    int jez(int jidlo); 
    enum PocetPrstu {dva, tri, ctyri, pet};
    void SetPrsty(PocetPrstu p) { prsty = p; }
    PocetPrstu prsty;
};

class Ptak : public Zvire {
public:
    Ptak() {delka_zivota = 10;}
    int jez(int jidlo);
    enum BarvaPeri {bila, cerna, cervena, zelena, modra};
    void SetBarva(BarvaPeri b) { barva = b; }
    BarvaPeri barva;
};

class Ryba : public Zvire {
public:
    Ryba() {delka_zivota = 100;}
    int jez(int jidlo);
    enum SlanostVody {slana, sladka};
    void SetVoda(SlanostVody v) { voda = v; }
    SlanostVody voda;
};