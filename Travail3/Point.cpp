#include "Point.h"

Point::Point()
{
    //ctor
}

Point::~Point()
{
    //dtor
}

//Dans la vraie vie la classe Point se dessinerai sur un cran graphique mais lˆ je vais me contenter de retourner une reprsentation de ses coordonnes.
std::string Point::print(){

    std::string returnValue = "";
    returnValue += "(";
    returnValue += std::to_string(this->Getx());
    returnValue +=  ", ";
    returnValue +=  std::to_string(this->Gety());
    if (this->Getz() != -1){
        returnValue +=  ", ";
        returnValue +=  std::to_string(this->Getz());
    }
    returnValue +=  ")";

    return returnValue;
}
