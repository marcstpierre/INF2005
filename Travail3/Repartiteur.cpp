#include "Repartiteur.h"

using namespace msp;

//Nos deux listes de voyages:
 std::list<Voyage*> voyages_non_fumeur;
 std::list<Voyage*> voyages_fumeur;

//On retourne la liste de voyages qui correspondent au type de voyage demandé.
std::list<Voyage*> Repartiteur::get_voyages(const char type_voyage){
    if (type_voyage == 'F') {
        return voyages_fumeur;
    } else {
        return voyages_non_fumeur;
    }
}

//Ajout d'un voyage dans la bonne liste
void Repartiteur::ajout_voyage(char type_voyage, Voyage &v){
	if (type_voyage == 'F'){
		voyages_fumeur.push_back(new Voyage(v));
	}
	else {
		voyages_non_fumeur.push_back(new Voyage(v));
	}
}

