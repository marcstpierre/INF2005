#include <iostream>
#include <iomanip>

using namespace std;


void usage(){
    cout << "Erreur : La valeur entrée n'est pas un nombre plus grand ou égal à 0." << endl;
}

int main()
{
    float cnd; //La valeur en dollars canadien telle que saisie par l'usager
    float tauxDeChange[3] = {1.35, 1.40, 1.60};//Les différents taux de change supportés

    /*C'est ici qeu commencent les choses sérieuses : on saisie le montant à traiter*/
    cout << "Entrer la valeur en dollars canadien à changer:\t" << std::endl;
    cin >> cnd;

    //On parle ici de vérification sommaire : avaons-nous vraiment un nombre et est-il plus gran que zéro ?
    if ( !cin.fail() && cnd >= 0){

        cout << "Voici les différentes valeurs pour $" << cnd << " en Euro selon différents taux de change."  << std::endl;
        cout << "Taux de change : " << std::setw(30) << " ";
        //On affiche les taux de change à partir du tableau de taux de change
        for (int i = 0; i<3; i++){
            std::cout << std::left << std::setfill(' ') << std::setw(10) << tauxDeChange[i];
        }
        cout << std::endl;

        //Et ici on affiche les montants en Euro à partir du tableau de taux de change et du montant saisi
        cout <<  "Montant en euro selon les taux de change :" << std::setw(5) << " ";
        for (int i = 0; i<3; i++){
            std::cout <<  std::left << std::setfill(' ') << std::setw(10) << tauxDeChange[i] * cnd;
        }
        cout << std::endl;
    } else {
        //La valeur saisie ne correspond pas aux attentes : on affiche un message d'erreur mais on pourrait
        //aussi boucler sur le cin jusqu'à ce que la valeur saisie soit bonne.
        usage();
    }
    return 0;
}
