#ifndef CAISSEDEBIERES_H
#define CAISSEDEBIERES_H
#include "contenant.h"
#include "string"
using namespace std;


class CaisseDeBieres : public Contenant
{
public :
    CaisseDeBieres(const int _largeur, const int _hauteur,
                       const int _profondeur, int _nbBouteilles, int _contenance);
    int CalculerVolume();
    ~CaisseDeBieres();

private:
    int nbBouteille;
    int contenance;
    string marque;
};


#endif // CAISSEDEBIERES_H
