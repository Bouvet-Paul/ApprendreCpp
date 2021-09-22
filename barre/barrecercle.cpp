#include "barrecercle.h"
#include <iostream>
using namespace std;

BarreCercle::BarreCercle(string _reference, float _longueur, float _densite, string _nomAlliage, float _diametre):
      Barre(_reference, _longueur, _densite, _nomAlliage),
      diametre(_diametre)
{
     cout << "constructeur de la classe BarreCercle" << endl ;
}

BarreCercle::~BarreCercle(){
    cout << "Destructeur de la classe BarreCercle" << endl;
}


