#include "Phrase.h"

Phrase::Phrase()
{
    //ctor
}

Phrase::~Phrase()
{
    //dtor
}

Phrase::Phrase(Mot* mot){
    this->premier_mot = mot;
}


Mot* Phrase::trouve_mot(std::string m){

    Mot* mot= this->Getpremier_mot()->trouve_mot(m);
    if (mot->Getmot() == m){
        return mot;
    } else if (this->suivant != NULL){
        return this->suivant->trouve_mot(m);
    }
}

void Phrase::print_chaine(){
    this->premier_mot->print_chaine();
    std::cout << ". ";
    if (this->suivant != NULL){
        this->suivant->print_chaine();
    } else {
        std::cout << std::endl;
    }

}
