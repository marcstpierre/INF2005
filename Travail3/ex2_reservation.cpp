#include "Autobus.h"
#include "Repartiteur.h"
#include "Client.h"
#include "Voyage.h"

using namespace msp;

char demande_type_voyage(){
    int reponse;
    std::cout << "Quel type d'autobus voulez-vous prendre ? " << std::endl;
    std::cout << "1 : non fumeur" << "2 : fumeur" << std::endl;
    cin >> reponse;
    if (reponse == 1) {
        return Voyage.NON_FUMEUR;
    } else if (reponse == 2) {
        return Voyage.FUMEUR;
    } else {
        return "F";
    }
}

int main(){

    Repartiteur repartiteur();
    char type_voyage = demande_type_voyage();
    Voyage voyages[] = repartiteur.get_voyages(type_voyage);

}
