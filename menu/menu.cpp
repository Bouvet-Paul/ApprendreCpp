#include <fstream>
#include <iostream>

#include "menu.h"


Menu::Menu(const string &_nom):nom(_nom), longueurMax(0)
{
// ouvrir le fichier
// Si il y a une erreur
// alors Afficher un message indiquant une erreur de lecture
// et mettre nbOptions à 0
// Sinon calculer nbOptions, le nombre d’options dans le fichier
// allouer dynamiquement le tableau options en fonction de nbOptions
// Pour chaque option dans le fichier
// Lire l’option et l’affecter dans le tableau options
// Si la taille de l’option est plus grande que longueurMax
// alors longueurMax reçoit la taille de l’option
// FinSi
// FinPour
// FinSi
}























void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
