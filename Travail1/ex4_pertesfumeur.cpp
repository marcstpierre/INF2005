#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Pour rendre le code plus lisible, j'aime bien utiliser des constantes
    double salaire_moyen_heure = 17.0;
    int nbr_heures_travaillees_par_jour = 8;
    int nbr_minutes_heure = 60;
    int nbr_de_fumeurs = 50;
    int duree_pause_journalier_en_minutes = 5;
    int nbr_jours_ouvrables_hebdo = 5;
    int nbr_semaines_mensuelles = 4;
    int nbr_mois_annuel = 12;

    //Il est temps de faire quelques petits calculs de base :
    // Combien de minutes y a-tèil dans une journée de travail ?
    int nbre_minutes_travaillees_par_jour = nbr_heures_travaillees_par_jour * nbr_minutes_heure;
    //Combien gagne un employé moyen dans une journée de travail ?
    double salaire_journalier_moyen = nbr_heures_travaillees_par_jour * salaire_moyen_heure;
    //que représentent 5 minutes sur une journe ?
    double proportion_pause_par_jour = static_cast<double>(duree_pause_journalier_en_minutes) / nbre_minutes_travaillees_par_jour;

    //On calcule les resultat à afficher
    double pertes_annuelles_en_heures = proportion_pause_par_jour * nbr_heures_travaillees_par_jour * nbr_jours_ouvrables_hebdo * nbr_semaines_mensuelles * nbr_mois_annuel * nbr_de_fumeurs;
    double pertes_journalieres_en_dollars = proportion_pause_par_jour  * salaire_journalier_moyen * nbr_de_fumeurs;
    double pertes_hebdo = pertes_journalieres_en_dollars * nbr_jours_ouvrables_hebdo;
    double pertes_mensuelles = pertes_hebdo * nbr_semaines_mensuelles;
    double pertes_annuelles = pertes_mensuelles * nbr_mois_annuel;

    //On affiche sous forme de tableau
    std::cout << std::fixed;
    std::cout << "Nombre d'heures perdues" << "\t\tPertes journalieres" << "\tPertes hebdomadaires" << "\tPertes mensuelles" << "\tPertes annuelles"<< std::endl;
    std::cout<< pertes_annuelles_en_heures  << "\t\t\t" <<  pertes_journalieres_en_dollars << "\t\t" << pertes_hebdo << "\t\t"  << pertes_mensuelles << "\t\t" << pertes_annuelles << std::endl;

    return 0;

}
