#include "CarreByComposition.h"

int main(){

    CarreByComposition* carre1 = new CarreByComposition();
    carre1->Setp1(Point(0, 0));
    carre1->Setdimension(125);
    carre1->print();


    CarreByComposition* carre2 = new CarreByComposition(10, 10, 150);
    carre2->print();
}
