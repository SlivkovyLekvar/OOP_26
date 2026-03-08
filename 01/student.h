#include <iostream>
#include <string>
#include <stdio.h>

const int MAX = 20;

enum class PREDMET {
    Matematicka_Analyza, 
    Linearni_Algebra, 
    Diskretni_Matematika, 
    Statistika, 
    Ekonomie, 
    Anglicky_Jazyk, 
    Programovani, 
    Fyzika
};

enum class ZNAMKA { A, B, C, D, E, F, X };

class Predmet {
private:
    PREDMET predmet;
public:
    ZNAMKA znamka = ZNAMKA::X;
    bool zapocet = false;
    bool zkouska = false;
    int pocet_pokusu = 3;
    bool splnen = (zapocet && zkouska) ? true : false;

    Predmet() {};
    Predmet(PREDMET p) : predmet(p) {};
    PREDMET GetPredmet() { return predmet; }
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
};