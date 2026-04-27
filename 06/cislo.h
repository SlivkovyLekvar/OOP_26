

class Cislo {
protected:
    double valueR;
    double valueI;
public:
    Cislo ();
    Cislo (double a, double b = 0);
    ~Cislo(){};
    double GetR() {return valueR;};
    double GetI() {return valueI;};
    Cislo operator+(Cislo x);
};

class KomplexniCislo : public Cislo {
public:
    KomplexniCislo() : Cislo() {};
    KomplexniCislo(double x, double y) : Cislo(x,y) {};
    ~KomplexniCislo(){};
    KomplexniCislo operator+(KomplexniCislo c);
};

class RealneCislo : public Cislo {
public:
    RealneCislo() : Cislo() {};
    RealneCislo(double x) : Cislo(x) {};
    ~RealneCislo(){};
    RealneCislo operator+(RealneCislo b);
};

class CeleCislo : public Cislo {
public:
    CeleCislo() : Cislo() {};
    //NENI MOJE TVORBA: static_cast dohledane pouziti
    CeleCislo(int x) : Cislo(static_cast<double>(x)) {};
    ~CeleCislo(){};
    CeleCislo operator+(CeleCislo a);
};



