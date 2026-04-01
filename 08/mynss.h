#include <iostream>

namespace Amalka {
    void f() { std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
    const char* g() { return "Amalka";}
}

namespace Ferdinand {
    void f() { std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
    const char* g() { return "Ferdinand";}
}

namespace Teodor {
    void f() {std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
    const char* g() { return "Teodor";}
}

void f() {std::cout<<"Byla zavolána funkce f() z globálního prostoru jmen: "<<std::endl; };
const char* g() { return "mynss.h"; };