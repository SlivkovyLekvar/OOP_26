#include <iostream>
#include "zvire.h"
#include "student.h"

int main() {

    Zvire pytlik, beruska;
    pytlik.jez(5);
    beruska.jez(1);

    Student Pavel("Pavel");
    Pavel.Zapis(Predmet(PREDMET::Matematicka_Analyza));
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::D);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, true);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::F);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::D);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::A);

    return 0;
}