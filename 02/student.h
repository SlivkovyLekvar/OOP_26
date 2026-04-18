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

struct Student {
    char* jmeno;
    int pocet_predmetu;
    struct {
        PREDMET predmet;
        ZNAMKA znamka;
        bool zapocet;
        bool zkouska;
        int pocet_pokusu;
    } predmety[MAX];
    const char* get_jmeno() const {return jmeno;}
    void set_jmeno(const char* jmeno);
    int get_pocet_predmetu() const {return pocet_predmetu;}
} Student;