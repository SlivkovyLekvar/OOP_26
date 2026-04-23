#include <iostream>
#include <cstring>

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

// NENÍ MOJE TVORBA: Pomocná funkce pro převod enum PREDMET na čitelný název 
const char* NazevPredmetu(PREDMET p);

struct Predmety {
    PREDMET predmet;
    ZNAMKA znamka = ZNAMKA::X;
    bool zapocet = false;
    bool zkouska = false;
    int pocetPokusu = 3;
    Predmety();
    Predmety(PREDMET predmet);
    bool Splnen() { return (zapocet && zkouska) ? true : false; }
};

struct Student {
    char* jmeno;
    int pocetPredmetu;
    Predmety predmety[MAX];
    //constructor (implicit)
    Student(const char* jmeno = "Unknown");
    //destructor
    ~Student();
    //copy constructor
    Student(const Student& vzor);
    const char* GetJmeno() const {return jmeno;}
    void SetJmeno(const char* jmeno);
    int GetPocetPredmetu() const {return pocetPredmetu;}
    bool Zapis(PREDMET p);
    bool Hodnoceni (PREDMET p, bool zapocet, ZNAMKA z = ZNAMKA::X);
    int ZapsanePredmety();
    int VypisZnamek();
    int SplnenychPredmetu();
    float PrumerZnamek();
};

void SortMin(int &a, int &b, int &c);