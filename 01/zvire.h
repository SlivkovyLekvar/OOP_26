#include <iostream>
#include <string>

class Zvire {
private:
    int zaludek;
    int vek;

public:
    Zvire() {zaludek = 1; vek = 0;};
    Zvire(int z) {zaludek = z; vek = 0;};
    Zvire(const Zvire& vzor) {zaludek = vzor.zaludek; vek = vzor.vek;};

    bool zije();
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();
};