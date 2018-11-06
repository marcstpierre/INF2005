#include <iostream>
#include "CubeFromCarre.h"

CubeFromCarre::CubeFromCarre()
{
    //ctor
}

CubeFromCarre::~CubeFromCarre()
{
    //dtor
}

void CubeFromCarre::print(){

    std::cout << "8 points dŽfinissent le cube : " << std::endl;
    std::cout << "p1 : (" << this->Getx() << ", " << this->Gety() << ", " << this->Getz() << ")" << std::endl;
    std::cout << "p2 : (" << this->Getx() + this->Getdimension() << ", " << this->Gety() << ", " << this->Getz() << ")" << std::endl;
    std::cout << "p3 : (" << this->Getx() + this->Getdimension() << ", " << this->Gety() + this->Getdimension() << ", " << this->Getz() << ")" << std::endl;
    std::cout << "p4 : (" << this->Getx() << ", " << this->Gety() + this->Getdimension() << ", " << this->Getz() << ")" << std::endl;
    std::cout << "p5 : (" << this->Getx() + this->Getdimension() << ", " << this->Gety() << ", " << this->Getz() + this->Getdimension() << ")" << std::endl;
    std::cout << "p6 : (" << this->Getx() + this->Getdimension() << ", " << this->Gety() + this->Getdimension() << ", " << this->Getz() + this->Getdimension() << ")" << std::endl;
    std::cout << "p7 : (" << this->Getx() << ", " << this->Gety() << ", " << this->Getz() + this->Getdimension() << ")" << std::endl;
    std::cout << "p8 : (" << this->Getx() << ", " << this->Gety() + this-> Getdimension() << ", " << this->Getz() + this->Getdimension() << ")" << std::endl;


}


