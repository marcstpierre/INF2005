#include "Autobus.h"
#include "Repartiteur.h"
#include "Client.h"
#include "Voyage.h"
#include <list>
#include <iostream>
#include <string>

using namespace msp;

Repartiteur repartiteur;

void init(){
    Autobus aF;
    aF.SetNbreSieges(63);
    aF.Settype(Voyage::FUMEUR);

    Autobus aFb;
    aFb.SetNbreSieges(55);
    aFb.Settype(Voyage::FUMEUR);

    Autobus aNF;
    aNF.SetNbreSieges(63);
    aNF.Settype(Voyage::NON_FUMEUR);

    Voyage vF1;
    vF1.Setdate_depart(Date(1,1,2019));
    vF1.Setdate_arrivee(Date(3,1,2019));
    vF1.Setautobus(&aF);
    vF1.Setid(1);
    repartiteur.ajout_voyage(Voyage::FUMEUR, vF1);

    Voyage vF2;
    vF2.Setdate_depart(Date(1,2,2019));
    vF2.Setdate_arrivee(Date(3,2,2019));
    vF2.Setautobus(&aFb);
    vF2.Setid(2);
    repartiteur.ajout_voyage(Voyage::FUMEUR, vF2);
}

const char demande_type_voyage(){
    int reponse;
    std::cout << "Quel type d'autobus voulez-vous prendre ? " << std::endl;
    std::cout << "1 : non fumeur\n" << "2 : fumeur" << std::endl;
    std::cin >> reponse;
    if (reponse == 1) {
        return 'N';//Voyage.NON_FUMEUR;
    } else if (reponse == 2) {
        return 'F';//Voyage.FUMEUR;
    } else {
        return 'N';//Voyage.NON_FUMEUR;
    }
}

void presente_list_voyage(std::list<Voyage*> voyages){
	std::cout << "Voici la liste des voyages disponibles et le nombre de places disponibles :" << std::endl;

	for (std::list<Voyage*>::iterator it = voyages.begin(), end = voyages.end(); it != end; ++it) {
		//std::cout << v << std::endl;
		(*it)->print();
	};
}

Voyage* get_voyage_par_id(int i, std::list<Voyage*> voyages){
    std::cout << "Recherche d'un voyage dont le id est " << i << std::endl;
    std::list<Voyage*>::iterator it;
    std::list<Voyage*>::iterator end;
    for (it = voyages.begin(), end = voyages.end(); it != end; ++it) {
        if ((*it)->Getid() == i){
            return (*it);
        }
	};

}

Voyage* select_voyage(std::list<Voyage*> voyages){
    presente_list_voyage(voyages);
    int selected_id = 0;

    Voyage *v;

    do {
        std::cout << "Veuillez ecrire le numero du voyage selectionne s'il vous plait..." << std::endl;
        std::cin >> selected_id;
        std::cout << "Vous avec selectionne le voyage " << selected_id << std::endl;
        v = get_voyage_par_id(selected_id, voyages);
    } while((*v).Getid() == -1);
    return v;
}

void reserve_places(Voyage *v){
    (*v).print();
    std::cout << "Voulez-vous reserver des places sur ce voyage ? (O/n)" << std::endl;
    char r;
    std::cin >> r;
    if (r != 'n' || r != 'N'){

        int nbr_place = 0;

        do {
            std::cout << "Combien de places voulez-vous rŽserver ? " << std::endl;
            std::cin >> nbr_place;
        } while(nbr_place == 0 || nbr_place > (*v).Getnombreplacesdispo());

        (*v).Reserve_places(nbr_place);
    }
}

int main(){
    init();
    char r;
    do {
            std::cout << "Désirez vous faire une réservation sur un voyage Montréal - New York ? (O/n)" << std::endl;
            std::cin >> r;
            if (r != 'n' && r != 'N' ){
                char type_voyage = demande_type_voyage();
                std::list<Voyage*> voyages = repartiteur.get_voyages(type_voyage);
                Voyage *v = select_voyage(voyages);
                (*v).print();
                reserve_places(v);
                (*v).print();
            }
    } while (r != 'n' && r != 'N');

}
