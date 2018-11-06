#ifndef MOT_H
#define MOT_H

#include <iostream>
#include <string>

//Voici une impl�mentation pour une classe Mot telle qu'elle pourrait etre utilis�e dans un contexte linguistique (par exemple : un analyseur de texte dans lequel on pourrait cat�goriser un mot plac� dans une phrase).
//Un Mot est un �l�ment qui peut avoir un pr�d�cesseur et/ou un suivant de telle sorte qu'il serait toujours possible d'int�roger le contexte imm�diat du mot.  Un mot est donc un maillon doublement chain�.
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

        //Un exemple d'enrichissement qu'il est possible de faire.  Dans la vraie vie j'aurais ici une liste de cat�gories lexicale possible pour le mot et il y aurait une m�thode qui parcourerait la chaine pour
        //d�terminer la vraie cat�gorie lexicale du Mot courant.
        std::string Getcategorie_lexicale() { return categorie_lexicale; }
        void Setcategorie_lexicale(std::string val) { categorie_lexicale = val; }

//        Un exemple de m�thode qui peut etre utile : chercher une chaine de caract�re dans une chaine de Mot.
        Mot* trouve_mot(std::string);

//        Une m�thode qui imprime la chaine de Mot � partir du mot courant.
        void print_chaine();


    protected:
    private:
        std::string mot;
        Mot* suivant;
        Mot* prec;
        std::string categorie_lexicale;
};

#endif // MOT_H
