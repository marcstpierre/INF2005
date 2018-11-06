#ifndef CUBEFROMCARRE_H
#define CUBEFROMCARRE_H

#include "CarreFromPoint.h"

//Nous pouvons dŽfinir un cube comme Žtant une "extension" en trois dimensions d'un point... comme la classe CarreFromPoint.  En fait un cube est un carrŽ qui a une Žpaisseur.
//  Le cube est donc une position (x, y, z) qui a une dimension.
//La position de chaque points sera alors ŽvaluŽes lors du dessin du cube ˆ partir de la position du point.
//Il y a bien des faons de construire le cube... ici j'ai choisi quelque chose de simple : l'extension du point se fait par la droite, le haut et la profondeur.

class CubeFromCarre : public CarreFromPoint
{
    public:
        CubeFromCarre();
        CubeFromCarre(int x, int y, int z, int dim){
        this->Setx(x);
        this->Sety(y);
        this->Setz(z);
        this->Setdimension(dim);
        };
        virtual ~CubeFromCarre();
        void print();

    protected:
    private:
};

#endif // CUBEFROMCARRE_H
