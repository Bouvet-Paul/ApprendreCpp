#include <iostream>
#include "carton.h"
#include "contenant.h"
#include "CaisseDeBoutteilles.h"

using namespace std;

int main()
{
    Carton prime(10,40,20,30);

   cout << "Poids maxi du carton :" << prime.ObtenirPoidsMaxi() << endl;
   cout << "Volume du carton :" << prime.CalculerVolume() << endl;

   CaisseDeBouteilles drPeper(5,9,6,20,33);

   cout << "Nombres de bouteilles dans la caisse :" << drPeper.CalculerVolume() << endl;
}

