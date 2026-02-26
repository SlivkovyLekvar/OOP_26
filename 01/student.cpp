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
    predmety[pocet_predmetu++] = p;

    return true;
}

bool Student::Hodnoceni(PREDMET p, bool zapocet, ZNAMKA z){
    for (int i = 0; i < pocet_predmetu; i++) {
        if (predmety[i].predmet == p) {
            if (zapocet) {
                predmety[i].zapocet = true;
                return true;
            }
            if (!zapocet && z == ZNAMKA::F) {
                predmety[i].zapocet = false;
                predmety[i].splnen = false;
                return true;
            }
            if (!predmety[i].zapocet) return false;
            if (predmety[i].pocet_pokusu <= 0) {
                printf("Student již nemá pokusy na tento předmět.\n");
                return false;
            }
            predmety[i].pocet_pokusu--;
            predmety[i].znamka = z;

            if (z != ZNAMKA::F) {
                predmety[i].zkouska = true;
                predmety[i].splnen = true;
            }

            return true;
        }
    }
    return false;
}
