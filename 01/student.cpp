#include "student.h"


void Zapis (Predmet p) {
    int no = PocetPredmetu();
    for (int i = (no++); i < MAX; i++) {

        if (predmety[i].GetPredmet() == "") {
            predmety[i] = p;
            break;
        }
    }
};

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

bool Student::Hodnoceni(PREDMET p, bool zapocet, ZNAMKA z)
{
    return false;
}
