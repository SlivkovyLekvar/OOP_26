#include <iostream>
#include <string>

class Zvire {
private:
    int zaludek;
    std::string jmeno;

public:
    Zvire() {zaludek = 1;};
    Zvire(int z) {zaludek = z;};
    
    //copy constructor
    Zvire(const Zvire& vzor);

    int zije() {return zaludek>0;};
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();

    const char* GetJmeno() {return jmeno.c_str();}
};