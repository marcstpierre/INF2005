#include "Autobus.h"
#include "Repartiteur.h"
#include "Client.h"
#include "Voyage.h"
#include <list>
#include <iostream>
#include <string>

using namespace msp;

Repartiteur repartiteur;

//Ici on va populer les listes de voyage du répartiteur.
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
    vF1.Setautobus(aF);
    vF1.Setid(1);
    repartiteur.ajout_voyage(Voyage::FUMEUR, vF1);

    Voyage vF2;
    vF2.Setdate_depart(Date(1,2,2019));
    vF2.Setdate_arrivee(Date(3,2,2019));
    vF2.Setautobus(aFb);
    vF2.Setid(2);
    repartiteur.ajout_voyage(Voyage::FUMEUR, vF2);

    Voyage vF3;
    vF3.Setdate_depart(Date(1,3,2019));
    vF3.Setdate_arrivee(Date(3,3,2019));
    vF3.Setautobus(aFb);
    vF3.Setid(3);
    repartiteur.ajout_voyage(Voyage::FUMEUR, vF3);

    Voyage vNF1;
    vNF1.Setdate_depart(Date(1,1,2019));
    vNF1.Setdate_arrivee(Date(3,1,2019));
    vNF1.Setautobus(aNF);
    vNF1.Setid(4);
    repartiteur.ajout_voyage(Voyage::NON_FUMEUR, vNF1);

    Voyage vNF2;
    vNF2.Setdate_depart(Date(1,2,2019));
    vNF2.Setdate_arrivee(Date(3,2,2019));
    vNF2.Setautobus(aNF);
    vNF2.Setid(5);
    repartiteur.ajout_voyage(Voyage::NON_FUMEUR, vNF2);
}

//On veut savoir quel type de voyage l'usager veut.
const char demande_type_voyage(){
    int reponse;
    std::cout << std::endl << "Quel type d'autobus voulez-vous prendre ? " << std::endl;
    std::cout << "1 : non fumeur" << std::endl << "2 : fumeur" << std::endl;
    std::cin >> reponse;
    if (reponse == 1) {
        return 'N';//Voyage.NON_FUMEUR;
    } else if (reponse == 2) {
        return 'F';//Voyage.FUMEUR;
    } else {
        return 'N';//Voyage.NON_FUMEUR;
    }
}

//Voici la liste des voyages qui correspondent au critère.
void presente_list_voyage(std::list<Voyage*> voyages){
	std::cout << "Voici la liste des voyages disponibles et le nombre de places disponibles :" << std::endl;

	for (std::list<Voyage*>::iterator it = voyages.begin(), end = voyages.end(); it != end; ++it) {
		(*it)->print();
	};
}

//L'usger a identifié le ID du voyage qu'il désire... il faut maintenant aller chercher le détails de ce voyage.
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

//On demande à l'usager de sélectionner un voyage à partir d'une liste.
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


//Une fois que le voyge est sélectionné il faut pouvoir réserver des places sur celui-ci.  On retourne le nombre de places prises.
int reserve_places(Voyage *v){
    std::cout << "Voulez-vous réserver des places sur ce voyage ? (O/n)" << std::endl;
    char r;
    std::cin >> r;
    if (r != 'n' && r != 'N'){

        int nbr_place = 0;

        do {
            std::cout << "Combien de places voulez-vous réserver ? " << std::endl;
            std::cin >> nbr_place;
        } while(nbr_place == 0 || nbr_place > (*v).Getnombreplacesdispo());

        (*v).Reserve_places(nbr_place);
        return nbr_place;
    }
    return 0;
}

//La vraie affaire ici serait de déleguer la réservation à une classe Reservation qui aurait pour responsabilité de lier un voyage à un client et d'afficher le bon billet.
void affiche_billet_embarquement(Voyage *v, int nbre_place){
    std::cout << std::endl << "-----------------------------------------------" << std::endl;
    std::cout << "Date de départ : " << (*v).Getdate_depart().GetFullDate() << std::endl;
    std::cout << "Nombre de places :" << nbre_place << std::endl;
    std::cout << "Type de voyage : " << (*v).Getautobus().Gettype() << std::endl;
    std::cout << "Nombre de sièges vendus : " << (*v).Getautobus().GetNbreSieges() - (*v).Getnombreplacesdispo() << std::endl;
    std::cout << "Nombre de places encore disponibles : " << (*v).Getnombreplacesdispo() << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}

int main(){
    init();
    char r;

//    Tant que l'usager ne dit pas 'Non'...
    do {
            std::cout << std::endl << "Désirez vous faire une réservation sur un voyage Montréal - New York ? (O/n)" << std::endl;
            std::cin >> r;
            if (r != 'n' && r != 'N' ){
                char type_voyage = demande_type_voyage();
                std::list<Voyage*> voyages = repartiteur.get_voyages(type_voyage);
                Voyage *v = select_voyage(voyages);
                int nbre_place = reserve_places(v);
                if (nbre_place > 0){
                    affiche_billet_embarquement(v, nbre_place);
                }
            }
    } while (r != 'n' && r != 'N');

}
