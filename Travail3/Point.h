#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>

//Il faut prŽvoir 2 sortes de Points : un point qui se situe sur un plan cartŽsien et un autre qui se place en trois dimensions.
class Point
{
    public:
        Point();
        virtual ~Point();
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        Point(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
        int Getz() {return z;}
        void Setz(int val){z = val;}
        std::string print();
    protected:
    private:
        int x;
        int y;
        int z = -1;
};

#endif // POINT_H
