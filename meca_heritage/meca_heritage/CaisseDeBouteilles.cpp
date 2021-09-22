#include "CaisseDeBoutteilles.h"
#include <iostream>
using namespace std;

CaisseDeBouteilles::CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur, int _nbBouteilles, int _contenance):
    Contenant(_hauteur,_largeur,_profondeur)
{
   nbBouteille= _nbBouteilles;
   contenance= _contenance;
}

CaisseDeBouteilles::~CaisseDeBouteilles(){

    cout << "Destructeur de CaisseDeBouteilles" << endl;

}

int CaisseDeBouteilles::CalculerVolume()
{
    return nbBouteille*contenance ;
}
