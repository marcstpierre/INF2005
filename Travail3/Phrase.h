#ifndef PHRASE_H
#define PHRASE_H

#include "Mot.h"
#include <iostream>
#include <string>


//Comme la classe Mot, la classe Phrase permet de chainer des phrases pour en faire des paragraphes.  L� aussi il est possible d'enrichir la phrase par une cat�gorisation (par exemple : phrase int�rogative, etc.)
//La Phrase est doublement chain�e et contient un pointeur vers le premier �l�ment d'une chaine de Mot.
class Phrase
{

    friend class Mot;
    public:
        Phrase();
        Phrase(Mot* mot);

        virtual ~Phrase();
        Mot* Getpremier_mot() { return premier_mot; }
        void Setpremier_mot(Mot* val) { premier_mot = val; }

        Phrase* Getsuivant() { return suivant; }
        void Setsuivant(Phrase* val) { suivant = val; val->precedant = this;}

        Phrase* Getprecedant() { return precedant; }
        void Setprecedant(Phrase* val) { precedant = val; val->suivant = this;}

        std::string Gettype_phrase() { return type_phrase; }
        void Settype_phrase(std::string val) { type_phrase = val; }

        Mot* trouve_mot(std::string);

        void print_chaine();
    protected:
    private:
        Mot* premier_mot;
        Phrase* suivant;
        Phrase* precedant;
        std::string type_phrase;
};

#endif // PHRASE_H
