#ifndef REPARTITEUR_H
#define REPARTITEUR_H
#include <iostream>
#include <list>
#include "Voyage.h"


//Le r�partiteur es la classe ou est d�finie l'offre de voyage.  Cette classe permet d'obtenir la liste des voyages qui correspondent au type de bus recherch� (fumeur ou non fumeur).
//Cette classe permet d'ajouter un voyage � l'offre.
namespace msp {
class Repartiteur
{
	public:
		std::list<Voyage*> get_voyages(char type_voyage);
		void ajout_voyage(char type_voyage, Voyage&);

	protected:

	private:


};

}
#endif
