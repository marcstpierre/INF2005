#ifndef VOYAGE_H
#define VOYAGE_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Autobus.h"

namespace msp {
class Voyage
{
    public:
        Voyage();
        Voyage(int i){id = i;}
        virtual ~Voyage();
         int Getid() const {return id;}
        void Setid(const int i) {id = i; }
         Date Getdate_depart() const { return date_depart; }
        void Setdate_depart(Date val) { date_depart = val; }
         Date Getdate_arrivee() const { return date_arrivee; }
        void Setdate_arrivee(Date val) { date_arrivee = val; }
        std::string Getlieu_depart() const { return lieu_depart; }
        void Setlieu_depart(std::string val) { lieu_depart = val; }
        std::string Getlieu_arrivee() const { return lieu_arrivee; }
        void Setlieu_arrivee(std::string val) { lieu_arrivee = val; }
        Autobus* Getautobus()  const { return autobus; }
        void Setautobus(Autobus*);
        unsigned int Getnombreplacesdispo();
        void Reserve_places(int );
        void Setnombreplacesdispo(int );

        friend std::ostream & operator << (std::ostream &, Voyage &);
        friend std::istream &operator>>(std::istream &, Voyage &);

        void print();

	static const char FUMEUR = 'F';
	static const char NON_FUMEUR = 'N';
    protected:
    private:
        int id;
        Date date_depart;
        Date date_arrivee;
        std::string lieu_depart;
        std::string lieu_arrivee;
        Autobus* autobus;
        unsigned int nombre_places_dispo;
};
}

#endif // VOYAGE_H
