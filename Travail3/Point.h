#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>

class Point
{
    public:
        Point();
        virtual ~Point();
        Point(int x, int y){
            this->x = x;
            this->y = y;
            std::cout << " Nouveau Point : " << x << ", " << y << std::endl;
        }
        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
        std::string print();
    protected:
    private:
        int x;
        int y;
};

#endif // POINT_H
