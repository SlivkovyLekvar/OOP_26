#include "student.h"
#include "zvire.h"

int main() {

    Student Pavel("Pavel");
    Pavel.Zapis(PREDMET::Matematicka_Analyza);
    Pavel.Zapis(PREDMET::Programovani);
    printf("Jméno studenta: %s\n", Pavel.GetJmeno());
    Pavel.SetJmeno("Pavel Novák");
    printf("Jméno studenta po změně: %s\n", Pavel.GetJmeno());

    return 0;

}