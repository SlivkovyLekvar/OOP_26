#include "student.h"
#include "zvire.h"

int main() {

    Student Pavel("Pavel");
    Pavel.Zapis(PREDMET::Matematicka_Analyza);
    Pavel.Zapis(PREDMET::Programovani);
    printf("Jméno studenta: %s\n", Pavel.GetJmeno());
    return 0;
}