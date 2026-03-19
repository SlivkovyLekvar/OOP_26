#include <iostream>
#include <string>

class Zvire {
protected:
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

    Zvire& operator=(const Zvire& vzor);
};

class Savec : public Zvire {
private:
 
public:
   int jez(); 
};

class Ptak : public Zvire {
public:
    int jez();
};

class Ryba : public Zvire {
public:
    int jez();
};