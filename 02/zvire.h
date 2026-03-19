#include <iostream>
#include <string>

class Zvire {
private:
    int zaludek;
    char* jmeno;
public:
    Zvire() {zaludek = 1;};
    Zvire(int z) {zaludek = z;};

    int zije() {return zaludek>0;};
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();

    //copy constructor
    Zvire(const Zvire& vzor);
    //constructor
    Zvire(const char* j);

    //Get, Set, destructor
    const char* GetJmeno();
    void SetJmeno(const char* j);
    ~Zvire();
};

struct Zvire {

} Zvire;