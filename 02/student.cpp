#include "student.h"
#include <cstring>

bool Student::Zapis(Predmet p){
    if (pocet_predmetu >= MAX) {
        printf("Nelze zapsat další předmět, student již má maximum předmětů.\n");
        return false;
    }
    for (int i = 0; i < pocet_predmetu; i++) {
        if (predmety[i].GetPredmet() == p.GetPredmet()) {
            printf("Tento předmět je již zapsany.\n");
            return false;
        }
    }
    predmety[pocet_predmetu] = p;
    pocet_predmetu++;
    printf("Student %s si zapsal předmět %s.\n", jmeno.c_str(), NazevPredmetu(p.GetPredmet()));
    return true;
}

bool Student::Hodnoceni(PREDMET p, bool zapocet, ZNAMKA z){
    for (int i = 0; i < pocet_predmetu; i++) {
        if (predmety[i].GetPredmet() == p) {
            if (predmety[i].pocet_pokusu <= 0) {printf("Student již nemá pokusy na tento předmět.\n");}
            else if (zapocet) {predmety[i].zapocet = true;}
            else if (!predmety[i].zapocet) {
                printf("Student nezískal zápočet, nemůže být hodnocen.\n");
                predmety[i].pocet_pokusu--;
            }
            else if (z == ZNAMKA::F) {
                predmety[i].znamka = z;
                predmety[i].zkouska = false;
                predmety[i].pocet_pokusu--;
            } else {
                predmety[i].znamka = z;
                predmety[i].zkouska = true;
                predmety[i].pocet_pokusu--;
            }
            return true;
        }
    }
    printf("Student nemá tento předmět zapsaný.\n");
    return false;
}

int Student::ZapsanePredmety() {
    printf("Student %s má zapsané předměty:\n", jmeno.c_str());
    for (int i=0; i<pocet_predmetu;i++) {
        printf("%s\n", NazevPredmetu(predmety[i].GetPredmet()));
    }
    return pocet_predmetu;
}

int Student::VypisZnamek() {
    printf("Hodnoceni studenta %s:\n", jmeno.c_str());
    for (int i =0; i <pocet_predmetu; i++) {
        printf("%s: %d\n", NazevPredmetu(predmety[i].GetPredmet()), predmety[i].znamka);
    }
    return 0;
}

int Student::SplnenychPredmetu() {
    int pocet = 0;
    for (int i=0; i<pocet_predmetu; i++) {
        printf("%s: %s\n", NazevPredmetu(predmety[i].GetPredmet()), predmety[i].Splnen() ? "Splněno" : "Nesplněno");
        if (predmety[i].Splnen()) {pocet++;}
    }
    return pocet;
}

float Student::PrumerZnamek() {
    int soucet = 0;
    int pocet = 0;
    for (int i=0; i<pocet_predmetu; i++) {
        if (predmety[i].Splnen()) {
            soucet = soucet + static_cast<int>(predmety[i].znamka);
            pocet++;
        }
    }
    if (pocet == 0) {
        printf("Student nemá splněné žádné předměty.\n");
        return 0;
    }
    float prumer = soucet / pocet;
    return prumer;
}

// NENÍ MOJE TVORBA
const char* NazevPredmetu(PREDMET p) {
    switch (p) {
        case PREDMET::Matematicka_Analyza: return "Matematická Analýza";
        case PREDMET::Linearni_Algebra: return "Lineární Algebra";
        case PREDMET::Diskretni_Matematika: return "Diskrétní Matematika";
        case PREDMET::Statistika: return "Statistika";
        case PREDMET::Ekonomie: return "Ekonomie";
        case PREDMET::Anglicky_Jazyk: return "Anglický Jazyk";
        case PREDMET::Programovani: return "Programování";
        case PREDMET::Fyzika: return "Fyzika";
        default: return "Neznámý předmět";
    }
}

//copy constructor
Student::Student (const Student& vzor) {
    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno) + 1];
        strcpy(jmeno, vzor.jmeno);
    } else {
        jmeno = nullptr;
    }
    pocet_predmetu = vzor.pocet_predmetu;
    predmety[MAX];
    for (int i = 0; i < pocet_predmetu; i++) {
        predmety[i] = vzor.predmety[i];
    }
}

// constructors
Student::Student() {
    jmeno = nullptr;
    pocet_predmetu = 0;
}

Student::Student(const char* j) {
    pocet_predmetu = 0;

    if (j) {
        jmeno = new char[strlen(j)+1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    }
}

void Student::SetJmeno(const char* j) {
    delete[] jmeno;
    if (j) {
        jmeno = new char[strlen(j)+1];
        strcpy(jmeno, j);
    } else {
        jmeno = nullptr;
    } 
}

const char* Student::GetJmeno() {
    return jmeno;
}

Student::~Student() {
    delete[] jmeno;
}