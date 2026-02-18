#include <iostream>
#include <string>

class Zvire {
private:
    int zaludek;

public:
    Zvire() {zaludek = 1;};

    int zije() {return zaludek>0;};
    int jez(int jidlo);
    int vymesuj(int objem);
};