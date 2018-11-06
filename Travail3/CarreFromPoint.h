#ifndef CARREFROMPOINT_H
#define CARREFROMPOINT_H

#include "Point.h"

//Nous pouvons d�finir un carr� comme �tant une "extension" en deux dimensions d'un point.  Le carr� est donc une position (x,y) qui a une dimension.
//La position de chaque points sera alors �valu�es lors du dessin du carr� � partir de la position du point.

class CarreFromPoint : public Point
{
    public:
        CarreFromPoint();
        CarreFromPoint(int x, int y, int dim){this->Setx(x); this->Sety(y); this->dimension = dim;}
        virtual ~CarreFromPoint();
        int Getdimension() { return dimension; }
        void Setdimension(int val) { dimension = val; }


        void print();
    protected:
    private:
        int dimension;
};

#endif // CARREFROMPOINT_H
