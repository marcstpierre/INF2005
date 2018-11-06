#include "CarreByComposition.h"

CarreByComposition::CarreByComposition()
{
    //ctor
}

CarreByComposition::~CarreByComposition()
{
    //dtor
}


void CarreByComposition::print(){
    std::cout << "4 points :" << std::endl;
    std::cout << "p1 " << this->p1.print()  << std::endl;
    std::cout << "p2 " << this->p2.print()  << std::endl;
    std::cout << "p3 " << this->p3.print()  << std::endl;
    std::cout << "p4 " << this->p4.print()  << std::endl;
}
