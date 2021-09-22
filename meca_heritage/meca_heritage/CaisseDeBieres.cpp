#include "CaisseDeBieres.h"
#include <iostream>
using namespace std;

CaisseDeBieres::CaisseDeBieres(const int _largeur, const int _hauteur, const int _profondeur, int _nbBouteilles, int _contenance):
    Contenant(_hauteur,_largeur,_profondeur)
{
   nbBouteille= _nbBouteilles;
   contenance= _contenance;
   marque= _marque;
}

CaisseDeBieres::~CaisseDeBieres(){

    cout << "Destructeur de CaisseDeBieres" << endl;

}
