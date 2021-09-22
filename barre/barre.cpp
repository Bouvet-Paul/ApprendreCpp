#include "barre.h"
#include <iostream>
using namespace std;
Barre::Barre(string _reference, float _longueur, float _densite, string _nomAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{
    cout << "constructeur de la classe Barre" << endl ;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Afficher la reference du produit : " << reference << endl;
    cout << "Afficher la longueur du produit : " << longueur << endl;
    cout << "Afficher la densite du produit : " << densite << endl;
    cout << "Afficher l'alliage du produit : " << nomAlliage << endl;
}

Barre::~Barre(){
    cout << "Destructeur de la classe Barre" << endl;
}
