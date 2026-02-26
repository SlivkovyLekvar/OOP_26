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
    Fyzika
};

enum class ZNAMKA { A, B, C, D, E, F };

class Predmet {
private:
    PREDMET predmet;
    ZNAMKA znamka;
    bool zapocet = false;
    int pocet_pokusu = 3;
    bool zkouska = false;
    bool splnen = false;

public:
    PREDMET GetPredmet() { return predmet; };
    ZNAMKA GetZnamka() { return znamka; };
};

class Student {
private:
    std::string jmeno;
    Predmet predmety[MAX];
    int pocet_predmetu;

public:
    Student(std::string j) : jmeno(j), pocet_predmetu(0) {};
    bool Zapis (Predmet p);
    bool Hodnoceni (PREDMET p, bool zapocet, ZNAMKA z);
};