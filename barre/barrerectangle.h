#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

class BarreRectangle:public Barre
{
public:
    BarreRectangle(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur);

    ~BarreRectangle();
protected:
    float largeur;
};

#endif // BARRERECTANGLE_H
