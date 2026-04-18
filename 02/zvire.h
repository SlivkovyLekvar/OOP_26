#include <iostream>
#include <cstring>

struct Zvire {
    private:
    int zaludek = 1;
    int vek = 0;
    char* jmeno;
    public:
    bool zije() {return zaludek>0;};
    int jez(int jidlo);
    int vymesuj(int objem);
    int stari();
    //constructor
    Zvire(const char* j);
    //copy constructor
    Zvire(const Zvire& vzor);
    //Get, Set, destructor
    const char* GetJmeno();
    void SetJmeno(const char* jmeno);
    ~Zvire();
};