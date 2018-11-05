#ifndef CARREFROMPOINT_H
#define CARREFROMPOINT_H

#include "Point.h"


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
