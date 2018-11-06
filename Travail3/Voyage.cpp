#include "Voyage.h"


using namespace msp;

Voyage::Voyage()
{
    //ctor
}

Voyage::~Voyage()
{
    //dtor
}

void Voyage::print(){
    Autobus a = this->autobus;
    std::cout << this->id << ") départ: " << this->date_depart.GetFullDate()<< ", Arrivee: " << this->date_arrivee.GetFullDate()  <<std::endl;
    std::cout << "nombre de places disponibles : " << this->Getnombreplacesdispo() << ", Nombre total de places : " << a.nbre_sieges <<std::endl;
}

unsigned int Voyage::Getnombreplacesdispo(){
    return nombre_places_dispo;}

void Voyage::Reserve_places(int n){
    Setnombreplacesdispo(Getnombreplacesdispo() - n);
    }

void Voyage::Setnombreplacesdispo(int n){
    nombre_places_dispo = n;}

void Voyage::Setautobus(Autobus val) {
    autobus = val;
    Setnombreplacesdispo(autobus.GetNbreSieges());
    }
