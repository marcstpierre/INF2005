#include <iostream>

using namespace std;

int nbr_caractere_minimal = 10;
int nbr_caractere_maximal = 100;

char caract;

int compte_caracteres(char mot[nbr_caractere_maximal]){
	int i = 0;
	while(mot[i] != '\0'){
	//	cout << i << ": " << mot[i] << endl;
		i++;
	}
	return i++;
}

bool valide_mot_saisie(char mot[nbr_caractere_maximal]){
    if (compte_caracteres(mot) < nbr_caractere_minimal){
            cout << "Le mot de contenir entre 10 et 100 caracteres." << endl;
        return false;
    } else {
	return true;
	}
}

char* demande_mot_et_caractere(){
    char motsaisie[nbr_caractere_maximal];
    cout << "Veuillez entrer un mot de 10 caracteres ou plus : ";
    cin >> motsaisie;
    while(!valide_mot_saisie(motsaisie)){
        cout << "Veuillez entrer un mot de 10 caracteres ou plus : ";
        cin >> motsaisie;
    }
    cout << "Veuillez entrer un caractere a rechercher :";
    cin >> caract;
	return motsaisie;
}

int* popule_indexes(char *mot){
   int indexes[nbr_caractere_maximal];
   int *p = indexes;
    int current_index = 0;
	int indexe_mot = 0;
    while (*mot != '\0'){
        if (toupper(*mot) == toupper(caract)){
//		cout << "on ajoute " << indexe_mot << " a la table indexes a la position " << current_index << endl;
		p = indexes + current_index; *p = indexe_mot;
            current_index++;
        }
	    mot++;
	indexe_mot++;
    }
	cout << "les indexes ou es touvent des " << caract << " dans le mot :" << endl;
	for (int j = 0; j<current_index; j++){
		cout << indexes[j] << " ";
	}
	cout << endl;
	return p;
}

void affiche_indexes(int * indexes){
	cout << "Voici la liste des indices ou se trouve le caractere recherche : " << endl;
	while(*indexes != '\0'){
		cout << *indexes << " " ;
		indexes++;
	}
	cout << endl;
}

void affiche_mot_formate(char *mot){
	while(*mot != '\0'){
		if (toupper(*mot) == toupper(caract)){
			cout << char(toupper(*mot));
		}
		else {
			cout << char(*mot);
		}
	mot++;
	}
	cout << endl;
}

int main(){
	char mot[nbr_caractere_maximal];
	//mot = demande_mot_et_caractere(mot);
	strcpy(mot,  demande_mot_et_caractere());
	 int *indexes =  popule_indexes(mot);
//	affiche_indexes(indexes);
	affiche_mot_formate(mot);
	return 0;
}
