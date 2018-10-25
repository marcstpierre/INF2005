#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

namespace msp {
class Date
{
    public:
        Date();
        Date(int , int , int );
        virtual ~Date();
        const int Getannee() const { return annee; }
        void Setannee(int val) { annee = val; }
        const int Getmois() const { return mois; }
        void Setmois(int val) { mois = val; }
        const int Getjour() const { return jour; }
        void Setjour(int val) { jour = val; }

        friend std::ostream &operator<<(std::ostream &,const Date &);
        std::string GetFullDate();



    protected:

    private:
        int annee;
        int mois;
        int jour;
};
}

#endif // DATE_H
