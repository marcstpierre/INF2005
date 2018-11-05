#include "Mot.h"

Mot::Mot()
{
    //ctor
}

Mot::~Mot()
{
    //dtor
}

Mot* Mot::trouve_mot(std::string m){
    if (this->Getmot() == m){
        return this;
    } else if (this->suivant != NULL){
        return this->Getsuivant()->trouve_mot(m);
    }

    return NULL;
}


void Mot::print_chaine(){
    std::cout << this->mot << " ";
    if (this->suivant != NULL){
        this->suivant->print_chaine();
    }
}
