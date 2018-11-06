#include "Personne.h"
#include <string>

Personne::Personne()
{
    //ctor
}

Personne::~Personne()
{
    //dtor
}

Personne::Personne(std::string nom, std::string prenom, int age, std::string telephone){
    this->age=age;
    this->nom = nom;
    this->prenom = prenom;
    this->telephone = telephone;
}

Personne * Personne::setAge(const int age){
    this->age = age;
    return this;
}

Personne * Personne::setNom(const std::string nom){
    this->nom = nom;
    return this;
}

Personne * Personne::setPrenom(const std::string prenom){
    this->prenom = prenom;
    return this;
}

Personne * Personne::setTelephone(std::string telephone){
    this->telephone = telephone;
    return this;
}

std::string Personne::getNom(){
    return this->nom;
}

std::string Personne::getPrenom(){
    return this->prenom;
}

std::string Personne::getTelephone(){
    return this->telephone;
}

int Personne::getAge(){
    return this->age;
}

std::string Personne::getNomComplet(){
    return this->prenom + " " + this->nom;
}

std::ostream &operator<<(std::ostream &sortie, const Personne &personne)
{
    sortie << std::endl << "Nom : " << personne.prenom << " " << personne.nom << std::endl << "Age : " << personne.age << std::endl << "Téléphone : " << personne.telephone << std::endl;;
    return sortie; // Permet l’opération « cout << a << b »;
}
// Surcharge de l’opérateur d’extraction
std::istream &operator>>(std::istream &entree, Personne &personne)
{
    std::cout << std::endl << "Veuillez compléter le formulaire de création de personne : " << std::endl;
    std::cout << "Nom : "<<std::endl;
     std::getline(entree, personne.nom);
    std::cout << "Prénom : "<<std::endl;
    std::getline(entree, personne.prenom);
    std::cout << "Age : "<<std::endl;
    entree >> personne.age;
    std::cout << "Téléphone : " << std::endl;
    std::string buf;
    std::cin.ignore();
    std::getline(entree, personne.telephone);
    return entree; // Permet l’opération « cin >> a >> b »;
}
