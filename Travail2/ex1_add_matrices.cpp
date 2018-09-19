#include <iostream>

//Il s'agit ici de faire un programme qui additionne deux matrices de 10 X 10.

using namespace std;

//Une simple constante : les tableaux seront des tableaux dim X dim
int const dim = 10;

int matrice1[dim][dim] = {  {0,1,2,3,4,5,6,7,8,9},
                            {9,8,7,6,5,4,3,2,1,0},
                            {2,3,4,5,6,7,8,9,0,1},
                            {9,8,7,6,5,4,3,2,1,0},
                            {3,4,5,6,7,8,9,0,1,2},
                            {9,8,7,6,5,4,3,2,1,0},
                            {4,5,6,7,8,9,0,1,2,3},
                            {9,8,7,6,5,4,3,2,1,0},
                            {5,6,7,8,9,0,1,2,3,4},
                            {6,7,8,9,5,0,1,2,3,4}
                        };
int matrice2[dim][dim] = {  {0,1,2,3,4,5,6,7,8,9},
                            {1,2,3,4,5,6,7,8,9,0},
                            {2,3,4,5,6,7,8,9,0,1},
                            {3,4,5,6,7,8,9,0,1,2},
                            {4,5,6,7,8,9,0,1,2,3},
                            {5,6,7,8,9,0,1,2,3,4},
                            {6,7,8,9,0,1,2,3,4,5},
                            {7,8,9,0,1,2,3,4,5,6},
                            {8,9,0,1,2,3,4,5,6,7},
                            {9,0,1,2,3,4,5,6,7,8}};

//la matrice qui va recevoir les resultats
int matrice_somme[dim][dim];

//Une methode utilitaire pour afficher le contenu d'une matrice donnee
void affiche_matrice(int tab[dim][dim]){
	for(int i = 0; i<dim; i++){
	cout << "|";
		for(int j = 0; j< dim; j++){
			cout << tab[i][j] << "|" ;
		}
		cout << endl;
	}
}

//Une methode qui additionne les valeurs et qui retourne le resultat
int add_cell(int valeur1, int valeur2){
    return (valeur1 + valeur2);
}

//voici notre programme principal
int main()
{
    for (int row = 0; row < dim; row++){
            //cout << "row:" << row << endl;
        for(int cell = 0; cell<dim; cell++){
            //cout << "\tcell:" << cell << endl;
            int valeur = add_cell(matrice1[row][cell], matrice2[row][cell]);
		matrice_somme[row][cell]=valeur;
            //cout << "\t\tvaleur : "<< matrice1[row][cell] << "+" << matrice2[row][cell] << " = " << matrice_somme[row][cell] << endl;
        }
    }

	affiche_matrice(matrice1);
	cout << "+" << endl;
	affiche_matrice(matrice2);
	cout << "="<<endl;
	affiche_matrice(matrice_somme);
    return 0;
}
