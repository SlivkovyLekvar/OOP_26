#include "zvire.h"
#include "student.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    system("chcp 65001");

    Zvire pytlik, beruska;
    pytlik.jez(5);
    beruska.jez(1);

    Student Pavel("Pavel");
    Pavel.Zapis(Predmet(PREDMET::Matematicka_Analyza));
    Pavel.Zapis(Predmet(PREDMET::Programovani));
    Pavel.Zapis(Predmet(PREDMET::Fyzika));
    Pavel.Zapis(Predmet(PREDMET::Matematicka_Analyza));
    Pavel.Zapis(Predmet(PREDMET::Statistika));
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::D);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, true);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::F);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::D);
    Pavel.Hodnoceni(PREDMET::Matematicka_Analyza, false, ZNAMKA::A);
    Pavel.Hodnoceni(PREDMET::Programovani, true);
    Pavel.Hodnoceni(PREDMET::Programovani, false, ZNAMKA::C);
    Pavel.Hodnoceni(PREDMET::Fyzika, true);
    Pavel.Hodnoceni(PREDMET::Fyzika, false, ZNAMKA::B);

    Pavel.ZapsanePredmety();
    Pavel.VypisZnamek();
    printf("Počet splněných předmětů: %d\n", Pavel.SplnenychPredmetu());
    printf("Průměr známek: %.2f\n", Pavel.PrumerZnamek());

    return 0;
}