#include <iostream>
#include <string>

class Zvire {
private:
    int zaludek;

public:
    Zvire() {zaludek = 1;};
    Zvire(int z) {zaludek = z;};
    Zvire(const Zvire& vzor) {zaludek = vzor.zaludek;};

    int zije() {return zaludek>0;};
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();
};