#include "mynss.h"
#include <stdlib.h>

using namespace Amalka;

int main() {
    system("chcp 65001");
    Amalka::f();
    std::cout<<Amalka::g()<<std::endl;
    Ferdinand::f();
    std::cout<<Ferdinand::g()<<std::endl;
    Teodor::f();
    std::cout<<Teodor::g()<<std::endl;
    ::f();
    std::cout<<::g()<<std::endl;
    return 0;
}