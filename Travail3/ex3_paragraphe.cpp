#include <iostream>
#include <string>
#include "Mot.h"
#include "Phrase.h"


Phrase * init(){

    Mot *premier_mot = new Mot(std::string("Un"));
    Mot *second_mot = new Mot("tien");
    Mot *troiseme_mot = new Mot("vaut");

    premier_mot->Setsuivant(second_mot);
    second_mot->Setsuivant(troiseme_mot);

    Phrase * phrase = new Phrase(premier_mot);
    return phrase;

}

int main(){

    Phrase *phrase = init();
    phrase->print_chaine();
    return 0;

}
