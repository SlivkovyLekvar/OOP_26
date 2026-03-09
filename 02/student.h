#include <iostream>
#include <string>

const int MAX = 20;

enum class PREDMET {
    Matematicka_Analyza, 
    Linearni_Algebra, 
    Diskretni_Matematika, 
    Statistika, 
    Ekonomie, 
    Anglicky_Jazyk, 
    Programovani, 
    Fyzika,
    COUNT
};

enum class ZNAMKA { X, A, B, C, D, E, F};

class Predmet {
private:
    PREDMET predmet;
public:
    ZNAMKA znamka = ZNAMKA::X;
    bool zapocet = false;
    bool zkouska = false;
    int pocet_pokusu = 3;

    Predmet() {};
    Predmet(PREDMET p) : predmet(p) {};
    PREDMET GetPredmet() { return predmet; }
    bool Splnen() { return (zapocet && zkouska) ? true : false; }
};

class Student {
private:
    std::string jmeno;
    Predmet predmety[MAX];
    int pocet_predmetu;

public:
    Student(std::string j) : jmeno(j), pocet_predmetu(0) {};
    bool Zapis (Predmet p);
    bool Hodnoceni (PREDMET p, bool zapocet, ZNAMKA z = ZNAMKA::X);

    int ZapsanePredmety();
    int VypisZnamek();
    int SplnenychPredmetu();
    float PrumerZnamek();

    //copy constructor
    Student(const Student& vzor);

    const char* GetJmeno() { return jmeno.c_str(); }
};

// NENÍ MOJE TVORBA: Pomocná funkce pro převod enum PREDMET na čitelný název 
const char* NazevPredmetu(PREDMET p);