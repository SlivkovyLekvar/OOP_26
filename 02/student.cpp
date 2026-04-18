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

void Student::set_jmeno(const char* jmeno) {
    free (this->jmeno); 
    this->jmeno = new char[strlen(jmeno) + 1];
    strcpy(this->jmeno, jmeno);
}