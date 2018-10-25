#include "Date.h"

using namespace msp;

Date::Date()
{
    //ctor
}

Date::Date(int j, int m, int a){
    annee = a;
    mois=m;
    jour=j;
    }
Date::~Date()
{
    //dtor
}

std::ostream &operator<<(std::ostream &sortie,const Date &date)
{
    sortie  << date.Getjour() << "/ " << date.Getmois() << "/" << date.Getannee() << std::endl ;
    //sortie  << date.jour << "/ " << date.mois << "/" << date.annee << std::endl ;
    return sortie; // Permet l’opération « cout << a << b »;
}

std::string Date::GetFullDate(){
    std::string date;
     date += std::to_string(this->Getjour());
     date += "/" ;
     date += std::to_string(this->Getmois());
     date += "/";
     date += std::to_string(this->Getannee());
     return date;
}
