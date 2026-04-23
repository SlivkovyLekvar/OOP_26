#include "student.h"
#include "zvire.h"
#include <stdlib.h>


int main() {

    system("chcp 65001");

    struct Zvire Macka("Macka");
    Macka.jez(5);
    Macka.vymesuj(3);
    Macka.jez(2);
    Macka.SetJmeno("Micka");
    Macka.jez(1);
    Macka.jez(1);
    Macka.jez(1);
    printf("Zvire %s ma %d let.\n", Macka.GetJmeno(), Macka.stari());
    Macka.vymesuj(8);
    printf("Zije zvire %s? %s\n", Macka.GetJmeno(), Macka.zije() ? "Ano" : "Ne");


    Student Pavel("Pavel");
    Pavel.Zapis(PREDMET::Matematicka_Analyza);
    Pavel.Zapis(PREDMET::Programovani);
    printf("Jméno studenta: %s\n", Pavel.GetJmeno());
    Pavel.SetJmeno("Pavel Novák");
    printf("Jméno studenta po změně: %s\n", Pavel.GetJmeno());

    return 0;

}