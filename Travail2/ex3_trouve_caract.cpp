#include <iostream>

using namespace std;

int nbr_caractere_minimal = 10;
int nbr_caractere_maximal = 100;

char caract;

//méthode qui compte le nombre d'un tableau de caractères 
int compte_caracteres(char mot[nbr_caractere_maximal]){
	int i = 0;
	while(mot[i] != '\0'){
		i++;
	}
	return i++;
}

//c'est ici qu'on valide que le mot saisie contient le nombre minimal de caractères.
bool valide_mot_saisie(char mot[nbr_caractere_maximal]){
    if (compte_caracteres(mot) < nbr_caractere_minimal){
            cout << "Le mot de contenir entre 10 et 100 caracteres." << endl;
        return false;
    } else {
	return true;
	}
}

//Méthode qui gère la saisie et la validation du mot à traiter.
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


//Cette méthode boucle dans le mot et trouve l'indexe des lettres qui sont égales à la lettre recherchée (on compare les majuscules).
int* popule_indexes(char *mot){
   int indexes[nbr_caractere_maximal];
   int *p = indexes; // on est en cpp, utilisons donc un pointeur pour faire référence au tableau d'indexes.
    int current_index = 0;
	int indexe_mot = 0;
    while (*mot != '\0'){
        if (toupper(*mot) == toupper(caract)){
		p = indexes + current_index;//On déplace le pointeur pour pointer vers l'indice dans le tableau d'indexes. 
		*p = indexe_mot;//C'est là qu'on assigne l'indice trouvé au tableau d'indexes.
            current_index++;
        }
	    mot++;
	indexe_mot++;
    }
	//Affichons les indexes trouvés.
	cout << "les indexes ou es touvent des " << caract << " dans le mot :" << endl;
	for (int j = 0; j<current_index; j++){
		cout << indexes[j] << " ";
	}
	cout << endl;
	return p;
}

//C'est ici qu'on affiche le mot saisie avec les caractères trouvés en majuscule.
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
	strcpy(mot,  demande_mot_et_caractere());
	 int *indexes =  popule_indexes(mot);
	affiche_mot_formate(mot);
	return 0;
}
