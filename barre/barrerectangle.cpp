#include "barrerectangle.h"
#include <iostream>
using namespace std;


BarreRectangle::BarreRectangle(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur):
      Barre(_reference, _longueur, _densite, _nomAlliage),
      largeur(_largeur)
{
     cout << "constructeur de la classe barreRectangle" << endl ;
}

BarreRectangle::~BarreRectangle(){
    cout << "Destructeur de la classe barreRectangle" << endl;
}
