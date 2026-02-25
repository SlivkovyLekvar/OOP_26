#include <iostream>
#include <string>

const int MAX = 20;

class Student {
private:
    std::string jmeno;
    Predmet predmety[MAX];

public:
    int PocetPredmetu() {
        int count = 0;
        for (int i = 0; i < MAX; i++) {
            if (predmety[i].GetPredmet() != "") {
                count++;
            }
        }
        return count;
    };
    void Zapis (Predmet p) {
        int no = PocetPredmetu();
        for (int i = (no++); i < MAX; i++) {

            if (predmety[i].GetPredmet() == "") {
                predmety[i] = p;
                break;
            }
        }
    };

};

class Predmet {
private:
    std::string nazev;
    int znamka;
    bool absolvovano;
    int zapocet;
    int zkouska;
public:
    std::string GetPredmet() {return nazev;};
    GetZnamka() {return znamka;};
    GetAbsolvovano() {return absolvovano;};
    GetZapocet() {return zapocet;};
    GetZkouska() {return zkouska;};
    SetPredmet(std::string n) {nazev = n;};
};