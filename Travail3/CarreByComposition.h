#ifndef CARREBYCOMPOSITION_H
#define CARREBYCOMPOSITION_H

#include "Point.h"
#include <iostream>

//Un carr� peut se d�finir par un ensemble de 4 points (entit�s de la classe Point).  Pour etre pratique par contre on ne permettra pas � l'utilisateur de l'api de d�finir lui-meme chaque point.
//Nous fournirons deux constructeurs : un constructeur qui ne sp�cifie aucune valeur et un constructeur qui permet de sp�cifier la position du point "inf�rieur - gauche".  Ce dernier constructeur construira
//le Point � partir des coordonn�es fournies.  La position de chaque point sera calculer par le m�thode calcul_positions() qui est appell�e automatiquement par les m�thodes Setdimension() et Setp1().
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
