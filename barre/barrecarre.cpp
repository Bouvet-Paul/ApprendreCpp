#include "barrecarre.h"
#include <iostream>
using namespace std;

BarreCarre::BarreCarre(string _reference, float _longueur, float _densite, string _nomAlliage, float _longueurCote):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    longueurCote(_longueurCote)
{
    cout << "constructeur de la classe barreCarre" << endl ;
}


BarreCarre::~BarreCarre(){
    cout << "Destructeur de la classe barreCarre" << endl;
}
