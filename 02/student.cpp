#include "student.h"

const char* NazevPredmetu(PREDMET p) {
    switch (p) {
        case PREDMET::Matematicka_Analyza: return "Matematicka Analyza";
        case PREDMET::Linearni_Algebra: return "Linearni Algebra";
        case PREDMET::Diskretni_Matematika: return "Diskretni Matematika";
        case PREDMET::Statistika: return "Statistika";
        case PREDMET::Ekonomie: return "Ekonomie";
        case PREDMET::Anglicky_Jazyk: return "Anglicky Jazyk";
        case PREDMET::Programovani: return "Programovani";
        case PREDMET::Fyzika: return "Fyzika";
        default: return "Neznamy predmet";
    }
}

Predmety::Predmety() {
    znamka = ZNAMKA::X;
    zapocet = false;
    zkouska = false;
    pocetPokusu = 3;
}

Predmety::Predmety(PREDMET p) {
    predmet = p;
    znamka = ZNAMKA::X;
    zapocet = false;
    zkouska = false;
    pocetPokusu = 3;
}

//constructor
Student::Student(const char* j) {
    if (j) {
        jmeno = new char[strlen(j)+1];
        strcpy(jmeno, j);
        pocetPredmetu = 0;
    } else {
        jmeno = nullptr;
        pocetPredmetu = 0;
    }
}
//destructor
Student::~Student() {
    delete[] jmeno;
}

//copy constructor
Student::Student(const Student& vzor) {
    if (vzor.jmeno) {
        jmeno = new char[strlen(vzor.jmeno)+1];
        strcpy(jmeno, vzor.jmeno);
        pocetPredmetu = vzor.pocetPredmetu;
        for (int i = 0; i < MAX; i++) {
            predmety[i] = vzor.predmety[i];
        }
    } else {
        this->jmeno = nullptr;
        this->pocetPredmetu = 0;
        return;
    }
    return;
}

void Student::SetJmeno(const char* jmeno) {
    delete[] this->jmeno;
    if (jmeno == nullptr) {
        this->jmeno = nullptr;
        return;
    } 
    this->jmeno = new char[strlen(jmeno) + 1];
    strcpy(this->jmeno, jmeno);
}

bool Student::Zapis(PREDMET p){
    if (pocetPredmetu >= MAX) {
        printf("Nelze zapsat další předmět, student již má maximum předmětů.\n");
        return false;
    }
    for (int i = 0; i < pocetPredmetu; i++) {
        if (predmety[i].predmet == p) {
            printf("Tento předmět je již zapsany.\n");
            return false;
        }
    }
    Predmety NovyPredmet(p);
    predmety[pocetPredmetu] = Predmety(p);
    pocetPredmetu++;
    printf("Student %s si zapsal předmět %s.\n", jmeno, NazevPredmetu(p));
    return true;
}

bool Student::Hodnoceni(PREDMET p, bool zapocet, ZNAMKA z){
    for (int i = 0; i < pocetPredmetu; i++) {
        if (predmety[i].predmet == p) {
            if (predmety[i].pocetPokusu <= 0) {printf("Student již nemá pokusy na tento předmět.\n");}
            else if (zapocet) {predmety[i].zapocet = true;}
            else if (!predmety[i].zapocet) {
                printf("Student nezískal zápočet, nemůže být hodnocen.\n");
                predmety[i].pocetPokusu--;
            }
            else if (z == ZNAMKA::F) {
                predmety[i].znamka = z;
                predmety[i].zkouska = false;
                predmety[i].pocetPokusu--;
            } else {
                predmety[i].znamka = z;
                predmety[i].zkouska = true;
                predmety[i].pocetPokusu--;
            }
            return true;
        }
    }
    printf("Student nemá tento předmět zapsaný.\n");
    return false;
}

int Student::ZapsanePredmety() {
    printf("Student %s má zapsané předměty:\n", jmeno);
    for (int i=0; i<pocetPredmetu;i++) {
        printf("%s\n", NazevPredmetu(predmety[i].predmet));
    }
    return pocetPredmetu;
}

int Student::VypisZnamek() {
    printf("Hodnoceni studenta %s:\n", jmeno);
    for (int i =0; i <pocetPredmetu; i++) {
        printf("%s: %d\n", NazevPredmetu(predmety[i].predmet), predmety[i].znamka);
    }
    return 0;
}

int Student::SplnenychPredmetu() {
    int pocet = 0;
    for (int i=0; i<pocetPredmetu; i++) {
        printf("%s: %s\n", NazevPredmetu(predmety[i].predmet), predmety[i].Splnen() ? "Splněno" : "Nesplněno");
        if (predmety[i].Splnen()) {pocet++;}
    }
    return pocet;
}

float Student::PrumerZnamek() {
    float soucet = 0;
    int pocet = 0;
    for (int i=0; i<pocetPredmetu; i++) {
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

void SortMin(int &a, int &b, int &c) {
    int tmp;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
}
