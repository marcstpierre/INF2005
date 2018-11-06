#include "CarreFromPoint.h"
#include "CubeFromCarre.h"

int main(){

    std::cout << std::endl<< "carre 1" << std::endl;
    CarreFromPoint* carre1 = new CarreFromPoint();
    carre1->Setx(0);
    carre1->Sety(0);
    carre1->Setdimension(125);
    carre1->print();

    std::cout << std::endl<< "carre 2" << std::endl;
    CarreFromPoint* carre2 = new CarreFromPoint(10, 10, 150);
    carre2->print();

    std::cout << std::endl<< "cube 1" << std::endl;
    CubeFromCarre* cube1 = new CubeFromCarre();
    cube1->Setx(0);
    cube1->Sety(0);
    cube1->Setz(0);
    cube1->Setdimension(100);
    cube1->print();

    std::cout << std::endl<< "cube 2" << std::endl;
    CubeFromCarre* cube2 = new CubeFromCarre(10, 10, 10, 125);
    cube2->print();
}
