#ifndef MOT_H
#define MOT_H

#include <iostream>
#include <string>

class Mot
{
    public:
        Mot();
        Mot(std::string m){this->Setmot(m);}
        Mot(const char m[]){this->Setmot(std::string(m));}
        virtual ~Mot();
        std::string Getmot() { return mot; }
        void Setmot(std::string val) { mot = val; }

        Mot* Getsuivant() { return suivant; }
        void Setsuivant(Mot* val) { suivant = val; val->prec = this;}

        Mot* Getprec() { return prec; }
        void Setprec(Mot* val) { prec = val; val->suivant = this;}

        std::string Getcategorie_lexicale() { return categorie_lexicale; }
        void Setcategorie_lexicale(std::string val) { categorie_lexicale = val; }

        Mot* trouve_mot(std::string);
        void print_chaine();
    protected:
    private:
        std::string mot;
        Mot* suivant;
        Mot* prec;
        std::string categorie_lexicale;
};

#endif // MOT_H
