#ifndef MOT_H
#define MOT_H

#include <iostream>
#include <string>

//Voici une implémentation pour une classe Mot telle qu'elle pourrait etre utilisée dans un contexte linguistique (par exemple : un analyseur de texte dans lequel on pourrait catégoriser un mot placé dans une phrase).
//Un Mot est un élément qui peut avoir un prédécesseur et/ou un suivant de telle sorte qu'il serait toujours possible d'intéroger le contexte immédiat du mot.  Un mot est donc un maillon doublement chainé.
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

        //Un exemple d'enrichissement qu'il est possible de faire.  Dans la vraie vie j'aurais ici une liste de catégories lexicale possible pour le mot et il y aurait une méthode qui parcourerait la chaine pour
        //déterminer la vraie catégorie lexicale du Mot courant.
        std::string Getcategorie_lexicale() { return categorie_lexicale; }
        void Setcategorie_lexicale(std::string val) { categorie_lexicale = val; }

//        Un exemple de méthode qui peut etre utile : chercher une chaine de caractère dans une chaine de Mot.
        Mot* trouve_mot(std::string);

//        Une méthode qui imprime la chaine de Mot à partir du mot courant.
        void print_chaine();


    protected:
    private:
        std::string mot;
        Mot* suivant;
        Mot* prec;
        std::string categorie_lexicale;
};

#endif // MOT_H
