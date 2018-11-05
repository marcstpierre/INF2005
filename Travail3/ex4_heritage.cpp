#include "CarreFromPoint.h"

int main(){

    CarreFromPoint* carre1 = new CarreFromPoint();
    carre1->Setx(0);
    carre1->Sety(0);
    carre1->Setdimension(125);
    carre1->print();


    CarreFromPoint* carre2 = new CarreFromPoint(10, 10, 150);
    carre2->print();
}
