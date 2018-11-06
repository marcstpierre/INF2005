#ifndef VOYAGE_H
#define VOYAGE_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Autobus.h"

//Un voyage se d�fini par un type (li� en fait un type d'autobus), un autobus, un nombre de places disponibles (l� aussi d�termin� par l'autobus lui meme), un lieu de d�part et un lieu d'arriv� ainsi que des dates d'arriv� et
//de d�part.
//Un voyage est aussi identifi� par un ID pour rendre l'interface usager un peu plus simple.
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
        Autobus Getautobus()  const { return autobus; }
        void Setautobus(Autobus);
        unsigned int Getnombreplacesdispo();
        void Reserve_places(int );
        void Setnombreplacesdispo(int );

        void print();

        static const char FUMEUR = 'F';
        static const char NON_FUMEUR = 'N';
    protected:
    private:
        int id = -1;
        Date date_depart;
        Date date_arrivee;
        std::string lieu_depart;
        std::string lieu_arrivee;
        Autobus autobus;
        unsigned int nombre_places_dispo;
};
}

#endif // VOYAGE_H
