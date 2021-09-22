#ifndef NBBOUTEILLES_H
#define NBBOUTEILLES_H
#include "contenant.h"



class nbBouteilles : public Contenant
{
public :
    nbBouteilles(const int _largeur, const int _hauteur,
                 const int _profondeur, int _nbBouteilles, int _contenance);
    int CalculerVolume();

private:
    int nbBouteille;
    int contenance;
};






#endif // NBBOUTEILLES_H
