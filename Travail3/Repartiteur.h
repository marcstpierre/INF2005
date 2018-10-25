#ifndef REPARTITEUR_H
#define REPARTITEUR_H
#include <iostream>
#include <list>
#include "Voyage.h"

namespace msp {
class Repartiteur
{
	public:
		std::list<Voyage> get_voyages(char type_voyage);
		void ajout_voyage(char type_voyage, Voyage);

	protected:

	private:


};

}
#endif
