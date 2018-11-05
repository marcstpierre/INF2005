#include "Point.h"

Point::Point()
{
    //ctor
}

Point::~Point()
{
    //dtor
}

std::string Point::print(){

    std::string returnValue = "";
    returnValue += "(";
    returnValue += std::to_string(this->Getx());
    returnValue +=  ", ";
    returnValue +=  std::to_string(this->Gety());
    returnValue +=  ")";

    return returnValue;
}
