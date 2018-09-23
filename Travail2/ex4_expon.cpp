#include <iostream>
#include <iomanip>
#include <math.h>

//Ici il faut générer un tableau de 20 exposant de e (i.e. exp(x) où x est généré aléatoirement) puis mettre ce tableau en ordre ascendant.

using namespace std;

int nbre_elements = 20;

//À partir de nombres générés aléatoirement, on popule un taleau composé de e à l'exposant du nombre généré.
void genereTableau(double tab[nbre_elements]){
    srand(time(NULL));//Ceci fait en sorte que la command rand() ne donne pas toujouts la meme suite de nombre
    if (nbre_elements > 0){
        for(int i=0; i<nbre_elements; i++){
            int nb = rand() %  20;//C'est pas tout a fait un nombre aleatoire qui est cree ici.  rand() construit une liste de nombre suffisamment longue qui a l'air alŽatoire.
            tab[i] = exp(nb);
        }
    }
}

//Onvetu pouvoir afficher le contenu du tableau
void afficheTableau(double tab[nbre_elements]){
    for (int i = 0; i<nbre_elements;i++){
        std::cout << i << ": " << tab[i] << "| ";
    }
    std::cout << std::endl;
}

//Pour tout algorithme de tri il faut prévoir permutter des éléments du tableau.
void permute(double tab[nbre_elements], int i, int j){
    double buffer = tab[i];
    tab[i] = tab[j];
    tab[j] = buffer;
}

//Faut bien s'amuser un peu : on va réinvestir les notions apprises dans le cours INF1425.  On va implémenter le tri par sélection... Les performances de cet algorithme seront suffisantes
//pour le nombre d'éléments à traiter.
void triParSelection(double tab[nbre_elements]){
    //Une premiere boucle qui servira de référence
    for (int i = 0; i < nbre_elements; i++){
        int idx_minimum_trouve = i;
        double minimum_trouve = tab[i];

        //Nous allons mointenant comparer chaque elements pour les indices plus hauts que i
        for (int j = i+1; j < nbre_elements; j++){
            if (tab[j] < minimum_trouve){
                idx_minimum_trouve = j;
                minimum_trouve = tab[idx_minimum_trouve];

            }
        }
        permute(tab, i, idx_minimum_trouve);
    }

}


int main(){

    double tab[nbre_elements];
    genereTableau(tab);

    cout << "tableau original : " << endl;
    afficheTableau(tab);
    triParSelection(tab);
    cout << "tableau trie : " << endl;
    afficheTableau(tab);
}
