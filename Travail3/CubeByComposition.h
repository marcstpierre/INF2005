#ifndef CUBEBYCOMPOSITION_H
#define CUBEBYCOMPOSITION_H
#include <iostream>
#include "Point.h"

//Un cube peut se dŽfinir par un ensemble de 8 points (entitŽs de la classe Point).  Pour etre pratique par contre on ne permettra pas ˆ l'utilisateur de l'api de dŽfinir lui-meme chaque point.
//Nous fournirons deux constructeurs : un constructeur qui ne spŽcifie aucune valeur et un constructeur qui permet de spŽcifier le point "infŽrieur - gauche".  Ce dernier constructeur prendra
//le Point en paramtre ainsi que la dimension du cube.  La position de chaque point sera calculer par le mŽthode calcul_positions() qui est appellŽe automatiquement par les mŽthodes Setdimension() et Setp1().
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
