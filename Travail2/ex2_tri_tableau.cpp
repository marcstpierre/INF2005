#include <iostream>
#include <cstdlib>
#include <ctime>

//Il s'agit ici de faire un programme qui tri un tableau d'entier

using namespace std;

//Une simple constante :
int const nbre_entiers = 10;

void affiche_tableau(int tab[nbre_entiers]){
	int i=0;
	while(tab[i] != '\0'){
		cout << "|"<< tab[i];
		i++;
	}
	cout << "|"<< endl;
}

void affiche_tableau_inverse(int tab[nbre_entiers]){
    for(int i = nbre_entiers - ; i >= 0; i--){
        cout << "|" << tab[i];
    }
    cout << "|" << endl;
}

int* genere_tableau(){
	srand(time(0));
	int tab[nbre_entiers];
	for(int i=0; i<nbre_entiers;i++){
		tab[i] = rand() % 400 + 0;
	}
	return tab;
}

void permutte(int tab[nbre_entiers], int i, int j){
	int buf = tab[i];
	tab[i] = tab[j];
	tab[j] = buf;
}

int partition(int tab[nbre_entiers], int r, int p){
	int q = p-1;
	int pivot = tab[p];//par simple choix, je choisi la derniere borne du tableua comme pivot
	for(int j = r; j<p;j++){
		if(tab[j] <= pivot){
			q++;
			permutte(tab, q, j);
		}
	}
	permutte(tab, ++q, p);
	return q;
}

void tri_rapide(int tab[nbre_entiers], int r, int p){
	int q = partition(tab, r, p);
	tri_rapide(tab, r, q-1);
	tri_rapide(tab, q+1,p);
}

int main(){
	int tab[] = genere_tableau();
	cout << "Tableau original : " << endl;
	affiche_tableau(tab);
	tri_rapide(tab, 0, nbre_entiers-1);
    cout << "Tableau triee : " << endl;
    affiche_tableau(tab);
    cout << "Tableau trie en ordre descendant :" << endl;
    affiche_tableau_inverse(tab);

}
