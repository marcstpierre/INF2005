#ifndef CUBEBYCOMPOSITION_H
#define CUBEBYCOMPOSITION_H
#include <iostream>
#include "Point.h"

//Un cube peut se d�finir par un ensemble de 8 points (entit�s de la classe Point).  Pour etre pratique par contre on ne permettra pas � l'utilisateur de l'api de d�finir lui-meme chaque point.
//Nous fournirons deux constructeurs : un constructeur qui ne sp�cifie aucune valeur et un constructeur qui permet de sp�cifier le point "inf�rieur - gauche".  Ce dernier constructeur prendra
//le Point en param�tre ainsi que la dimension du cube.  La position de chaque point sera calculer par le m�thode calcul_positions() qui est appell�e automatiquement par les m�thodes Setdimension() et Setp1().
class CubeByComposition
{
    public:
        CubeByComposition();
        CubeByComposition(Point p1, int dim){
            this->p1 = p1;
            this->Setdimension(dim);
            }
        virtual ~CubeByComposition();
        Point Getp1() { return p1; }
        void Setp1(Point val) { p1 = val; this->calcul_positions();}
        int Getdimension() {return this->dimension;}
        void Setdimension(int val) {
            this->dimension = val;
            this->calcul_positions();
            }
        void print();

    protected:
        void calcul_positions(){
                this->p2 = Point(this->p1.Getx() + this->dimension, this->p1.Gety(), this->p1.Getz() );
                this->p3 = Point(this->p1.Getx() + this->dimension, this->p1.Gety() + this->dimension, this->p1.Getz() );
                this->p4 = Point(this->p1.Getx(), this->p1.Gety() + this->dimension, this->p1.Getz() );
                this->p5 = Point(this->p1.Getx(), this->p1.Gety(), this->p1.Getz() + this->dimension);
                this->p6 = Point(this->p1.Getx(), this->p1.Gety() + this->dimension, this->p1.Getz() + this->dimension);
                this->p7 = Point(this->p1.Getx() + this->dimension, this->p1.Gety()+ this->dimension, this->p1.Getz() + this->dimension);
                this->p8 = Point(this->p1.Getx() + this->dimension, this->p1.Gety(), this->p1.Getz() + this->dimension);
        }
    private:
        Point p1;
        Point p2;
        Point p3;
        Point p4;
        Point p5;
        Point p6;
        Point p7;
        Point p8;
        int dimension = 0;
};

#endif // CUBEBYCOMPOSITION_H
