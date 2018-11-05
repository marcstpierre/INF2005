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
    std::cout << "un carrŽ ˆ dessiner :" << std::endl;
    std::cout << "----- Dessine une ligne entre " << this->p1.print() << "et " << this->p2.print() << std::endl;
    std::cout << "----- Dessine une ligne entre " << this->p2.print() << "et " << this->p3.print() << std::endl;
    std::cout << "----- Dessine une ligne entre " << this->p3.print() << "et " << this->p4.print() << std::endl;
    std::cout << "----- Dessine une ligne entre " << this->p4.print() << "et " << this->p1.print() << std::endl;

}
