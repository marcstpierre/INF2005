#include "Repartiteur.h"

using namespace msp;

 std::list<Voyage> voyages_non_fumeur;
 std::list<Voyage> voyages_fumeur;

std::list<Voyage> Repartiteur::get_voyages(const char type_voyage){
    if (type_voyage == 'F') {
        return voyages_fumeur;
    } else {
        return voyages_non_fumeur;
    }
}

void Repartiteur::ajout_voyage(char type_voyage, Voyage v){
	if (type_voyage == 'F'){
		voyages_fumeur.push_back(v);
	}
	else {
		voyages_non_fumeur.push_back(v);
	}
	std::cout << "ajout du voyage " << v.Getid() << " avec " << v.Getnombreplacesdispo() << " sieges" << std::endl;
}
