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

std::ostream & operator << (std::ostream &sortie, Voyage &v)
{
        sortie << "blah" << std::endl;
//        sortie << "Id : " << v.Getid() << std::endl;
    return sortie; // Permet l’opération « cout << a << b »;
}

void Voyage::print(){
    std::cout << this->id << ") départ: " << this->date_depart.GetFullDate()<< ", Arrivee: " << this->date_arrivee.GetFullDate() << ", nombre de places: " << this->Getnombreplacesdispo() <<std::endl;
}

unsigned int Voyage::Getnombreplacesdispo(){
    return nombre_places_dispo;}

void Voyage::Reserve_places(int n){
    Setnombreplacesdispo(Getnombreplacesdispo() - n);
    }

void Voyage::Setnombreplacesdispo(int n){
    nombre_places_dispo = n;}

void Voyage::Setautobus(Autobus* val) {
    autobus = val;
    Setnombreplacesdispo(autobus->GetNbreSieges());
//    std::cout << "nbre de places:" << this->Getnombreplacesdispo() << std::endl;

    }
