#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>


class Personne
{
    public:
        Personne();
        virtual ~Personne();
        Personne(const std::string, const std::string, const int, std::string);
        Personne* setPrenom(const std::string);
        Personne * setNom(const std::string);
        Personne * setAge(const int);
        Personne * setTelephone(const std::string);
        std::string getNom();
        std::string getPrenom();
        std::string getTelephone();
        int getAge();
        std::string getNomComplet();

        friend std::ostream &operator<<(std::ostream &, const Personne &);
        friend std::istream &operator>>(std::istream &, Personne &);
    protected:
    private:
        std::string nom;
        std::string prenom;
        int age;
        std::string telephone;
};

#endif // PERSONNE_H
