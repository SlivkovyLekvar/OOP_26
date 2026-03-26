class Cislo {
protected:
    double value;
public:
    Cislo ();
    ~Cislo();
    Cislo operator+();

};

class CeleCislo : public RealneCislo {
public:
    CeleCislo();
};

class RealneCislo : public KomplexniCislo {

};

class KomplexniCislo : public Cislo {

};