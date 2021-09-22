#ifndef BARRECERCLE_H
#define BARRECERCLE_H
#include "barre.h"

class BarreCercle: public Barre
{
public:

    BarreCercle(string _reference, float _longueur, float _densite, string _nomAlliage, float _diametre);

    ~BarreCercle();

protected:
        float diametre;
};

#endif // BARRECERCLE_H
