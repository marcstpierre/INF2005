#ifndef REPARTITEUR_H
#define REPARTITEUR_H
#include <iostream>

namespace msp {
class Repartiteur
{
	public:
		Voyage* get_voyages(char type_voyage);
	protected:

	private:
		Voyage [] voyages_non_fumeur;
		Voyage [] voyages_fumeur;

};

}
#endif
