#ifndef CARREBYCOMPOSITION_H
#define CARREBYCOMPOSITION_H

#include "Point.h"
#include <iostream>


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
        void Setp1(Point val) { p1 = val; }

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
