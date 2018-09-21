#include <iostream>

using namespace std;

int nbr_caractere_minimal = 10;
int nbr_caractere_maximal = 100;

char caract;

int compte_caracteres(char mot[nbr_caractere_maximal]){
	int i = 0;
	while(mot[i] != '\0'){
		i++;
	}
	return i;
}

bool valide_mot_saisie(char mot[nbr_caractere_maximal]){
    if (compte_caracteres(mot) < nbr_caractere_minimal){
            cout << "Le mot de contenir entre 10 et 100 caracteres." << endl;
        return false;
    }
}

char* demande_mot_et_caractere(){
	char mot[nbr_caractere_maximal];
    cout << "Veuillez entrer un mot de 10 caracteres ou plus : ";
    cin >> mot;
    while(!valide_mot_saisie(mot)){
        cout << "Veuillez entrer un mot de 10 caracteres ou plus : ";
        cin >> mot;
    }
    cout << "Veuillez entrer un caractere a rechercher :";
    cin >> caract;
	return mot;
}

int* popule_indexes(char mot[nbr_caractere_maximal]){
   int indexes[nbr_caractere_maximal];
	int i = 0;
    int current_index = 0;
    while (mot[i] != '\0'){
        if (toupper(mot[i]) == toupper(caract)){
            indexes[current_index] = i;
            current_index++;
        }
        i++;
    }
	return indexes;
}

void affiche_indexes(int indexes[nbr_caractere_maximal]){
	cout << "Voici la liste des indices ou se trouv le caractere recherche : " << endl;
	int i = 0;
	while(indexes[i] != '\0'){
		cout << indexes[i] << " " ;
		i++;
	}
}

void affiche_mot_formate(char mot[nbr_caractere_maximal]){
	int i=0;
	while(mot[i] != '\0'){
		if (toupper(mot[i]) == toupper(caract)){
			cout << toupper(mot[i]);
		}
		else {
			cout << mot[i];
		}
		i++;
	}
}

int main(){
	char mot[nbr_caractere_maximal];
	strcpy(mot,  demande_mot_et_caractere());
	int indexes[nbr_caractere_maximal] = populate_indexes(mot);
	affiche_indexes(indexes);
	affiche_mot_formate(mot);
	return 0;
}
