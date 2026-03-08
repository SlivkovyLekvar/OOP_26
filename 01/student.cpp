#include "student.h"

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
    printf("Student %s zapsal předmět %d.\n", jmeno.c_str(), p.GetPredmet());
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
