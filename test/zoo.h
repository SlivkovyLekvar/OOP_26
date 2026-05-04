#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <stdexcept>
#include <fstream>

namespace MojeZOO {

    const int KAPACITA_VYBEHU = 12;

    enum class origin {nezname, zajeti, priroda};
    enum class enviroment {nezname, tropy, skaly, voda};

    class Zvire {
    protected:
        char* jmeno;
        int vek;
        int delkaZivota = 20;
        int obsahZaludku;
        origin puvod;
        enviroment oblast;

        public:
        Zvire();
        Zvire(const char* j, origin o = origin::nezname, enviroment e = enviroment::nezname, int n = 0, int zaludek = 1 );
        virtual ~Zvire();

        const char* GetJmeno() const;
        void SetJmeno(const char* j);
        int GetVek();
        bool Zije();
        origin GetPuvod();
        enviroment GetOblast();

        virtual void Jez(int jidlo) = 0;
        virtual void AntiJez(int antijidlo);

        Zvire(const Zvire& vzor);
        Zvire& operator=(const Zvire& vzor);

    };

    class Savec : public Zvire {
    public:
        Savec() {delkaZivota = 60;};
        void Jez(int jidlo) override;
    };

    class Ptak : public Zvire {
    public:
        Ptak() {delkaZivota = 40;};
        void Jez(int jidlo) override;
    };

    class Plaz : public Zvire {
    public:
        Plaz() {delkaZivota = 20;};
        void Jez(int jidlo) override;
    };

    class Osetrovatel {
        char* jmeno;
        std::vector<Zvire*> mojeZvirata;
        std::string sesit;
    public:
        Osetrovatel();
        ~Osetrovatel();
        const char* GetJmeno();
        void SetJmeno(const char* j);
        void PridatZvire(Zvire& z);

        void NastavSoubor(const char* s);
        void ZapisKrmeni(Zvire& z, int jidlo);
        void ZapisPoznamku(const char* text);

    };

    class Vybeh {
        int cisloVybehu;
        enviroment oblast;
        int noOsetrovatelu;
        Osetrovatel osetrovatele[3];
        std::vector<Zvire*> zvirata;
    public:
        Vybeh();
        ~Vybeh();

        int PocetZivych();
        Zvire& GetZvire(int index);
    };

    class Zoo {
        std::vector<Zvire*> vsechnaZvirata;
        std::vector<Vybeh> vybehy;

    public:
        Zoo();
        ~Zoo();

        void PridatZvire(Zvire* z);
        void PridatVybeh(const Vybeh& v);

    Zvire& GetZvire(int index);
        int PocetZvirat() const;
};

}