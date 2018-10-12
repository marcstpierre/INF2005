#include "Repartiteur.h"

using namespace msp;

Voyage* Repartiteur::get_voyages(char type_voyage){
    if (type_voyage == Voyage.FUMEUR) {
        return voyages_fumeur;
    } else {
        return voyages_non_fumeur
    }
}
