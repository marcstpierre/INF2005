#include "CarreFromPoint.h"
#include <iostream>


CarreFromPoint::CarreFromPoint()
{
    //ctor
}

CarreFromPoint::~CarreFromPoint()
{
    //dtor
}

void CarreFromPoint::print(){
    std::cout << "un carré à dessiner :" << std::endl;
    std::cout << "----- Dessine une ligne entre (" << this->Getx() << ", " << this->Gety() << ") et (" << this->Getx() << ", " << this->Gety() + this->dimension << ")" << std::endl;
    std::cout << "----- Dessine une ligne entre (" << this->Getx() << ", " << this->Gety() + this->dimension << ") et (" << this->Getx() + this->dimension << ", " << this->Gety() + this->dimension << ")" << std::endl;
    std::cout << "----- Dessine une ligne entre (" << this->Getx() + this->dimension << ", " << this->Gety() + this->dimension << ") et (" << this->Getx() + this->dimension << ", " << this->Gety() << ")" << std::endl;
    std::cout << "----- Dessine une ligne entre (" << this->Getx() + this->dimension << ", " << this->Gety() << ") et (" << this->Getx() << ", " << this->Gety() << ")" << std::endl;
}
