#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"

class BarreCarre:public Barre
{
public:
    BarreCarre(string _reference, float _longueur, float _densite, string _nomAlliage, float _longueurCote);

    ~BarreCarre();
protected:
    float longueurCote;


};

#endif // BARRECARRE_H
