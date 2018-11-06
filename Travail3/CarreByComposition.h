#ifndef CARREBYCOMPOSITION_H
#define CARREBYCOMPOSITION_H

#include "Point.h"
#include <iostream>

//Un carrŽ peut se dŽfinir par un ensemble de 4 points (entitŽs de la classe Point).  Pour etre pratique par contre on ne permettra pas ˆ l'utilisateur de l'api de dŽfinir lui-meme chaque point.
//Nous fournirons deux constructeurs : un constructeur qui ne spŽcifie aucune valeur et un constructeur qui permet de spŽcifier la position du point "infŽrieur - gauche".  Ce dernier constructeur construira
//le Point ˆ partir des coordonnŽes fournies.  La position de chaque point sera calculer par le mŽthode calcul_positions() qui est appellŽe automatiquement par les mŽthodes Setdimension() et Setp1().
class CarreByComposition
{
    public:
        CarreByComposition();
        CarreByComposition(int x, int y, int dim){
            this->p1 = Point(x, y);
            this->Setdimension(dim);
        }
        virtual ~CarreByComposition();
        Point Getp1() { return p1; }
        void Setp1(Point val) { p1 = val; calcul_positions();}

        int Getdimension() { return dimension; }
        void Setdimension(int val) { dimension = val; calcul_positions();}
        void print();

    protected:
        void calcul_positions(){
                this->p2 = Point(this->p1.Getx() + this->dimension, this->p1.Gety() );
                this->p3 = Point(this->p1.Getx() + this->dimension, this->p1.Gety() + this->dimension );
                this->p4 = Point(this->p1.Getx(), this->p1.Gety() + this->dimension );
        }
    private:
        Point p1;
        Point p2;
        Point p3;
        Point p4;
        int dimension = 0;
};

#endif // CARREBYCOMPOSITION_H
