#include "mynss.h"

void Amalka::f() { std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
const char* Amalka::g() { return "Amalka"; }

void Ferdinand::f() { std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
const char* Ferdinand::g() { return "Ferdinand"; }

void Teodor::f() { std::cout<<"Byla zavolána funkce f() z namespace: "<<std::endl; }
const char* Teodor::g() { return "Teodor"; }

void f() { std::cout<<"Byla zavolána funkce f() z: "<<std::endl; }
const char* g() { return "globální namespace"; }