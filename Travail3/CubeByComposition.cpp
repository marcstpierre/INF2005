#include "CubeByComposition.h"

CubeByComposition::CubeByComposition()
{
    //ctor
}

CubeByComposition::~CubeByComposition()
{
    //dtor
}

void CubeByComposition::print(){

    std::cout << "8 points :" << std::endl;
    std::cout << "p1 : " << this->p1.print()  << std::endl;
    std::cout << "p2 : " << this->p2.print()  << std::endl;
    std::cout << "p3 : " << this->p3.print()  << std::endl;
    std::cout << "p4 : " << this->p4.print()  << std::endl;
    std::cout << "p5 : " << this->p5.print()  << std::endl;
    std::cout << "p6 : " << this->p6.print()  << std::endl;
    std::cout << "p7 : " << this->p7.print()  << std::endl;
    std::cout << "p8 : " << this->p8.print()  << std::endl;

}
