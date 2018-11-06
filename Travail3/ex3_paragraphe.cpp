#include <iostream>
#include <string>
#include "Mot.h"
#include "Phrase.h"


Phrase* premiere_phrase(){

    Mot *premier_mot = new Mot(std::string("Un"));
    Mot *second_mot = new Mot("tien");
    Mot *troiseme_mot = new Mot("vaut");

    Mot *seconde_chaine = new Mot("mieux");
    seconde_chaine->Setsuivant(new Mot("que deux"));

    premier_mot->Setsuivant(second_mot);
    second_mot->Setsuivant(troiseme_mot);

    troiseme_mot->Setsuivant(seconde_chaine);

    Phrase * phrase = new Phrase(premier_mot);
    return phrase;
}

Phrase* seconde_phrase(){
    Mot* uno = new Mot("uno");
    Mot* due = new Mot("due");
    Mot* tres = new Mot("tres");
    Mot* quatro = new Mot("quatro");
    Mot* cinque = new Mot("cinque");

    uno->Setsuivant(due);
    cinque->Setprec(quatro);
    tres->Setsuivant(quatro);
    quatro->Setprec(tres);
    due->Setsuivant(tres);

    Phrase* p = new Phrase(uno);
    return p;
}


int main(){

    Phrase *phrase = premiere_phrase();
    Phrase *phrase2 = seconde_phrase();
    phrase->Setsuivant(phrase2);
    phrase->print_chaine();
    return 0;

}
