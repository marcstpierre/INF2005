#include "CarreByComposition.h"
#include "CubeByComposition.h"
#include <iostream>

int main(){

    std::cout << std::endl << "CarrŽ 1 :" << std::endl;
    CarreByComposition* carre1 = new CarreByComposition();
    carre1->Setp1(Point(0, 0));
    carre1->Setdimension(125);
    carre1->print();

    std::cout << std::endl << "CarrŽ 2 :" << std::endl;
    CarreByComposition* carre2 = new CarreByComposition(10, 10, 150);
    carre2->print();

    std::cout << std::endl << "Cube 1 :" << std::endl;
    CubeByComposition* cube1 = new CubeByComposition();
    cube1->Setp1(Point(0, 0, 0));
    cube1->Setdimension(100);
    cube1->print();

    std::cout << std::endl << "Cube 2 :" << std::endl;
    CubeByComposition* cube2 = new CubeByComposition(Point(10, 10, 10), 125);
    cube2->print();

}
