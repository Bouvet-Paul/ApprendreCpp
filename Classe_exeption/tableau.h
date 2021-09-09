#ifndef TABLEAU_H
#define TABLEAU_H
#include <classeerreur.h>
class Tableau
{
private:
    int *ptr;
    int taille;
public:
    Tableau(int _taille);
    ~Tableau();
    void Affecter(int _indice, int _valeur);
    int &operator[](int _indice);
};

Tableau::Tableau(int _taille):
    taille(_taille)
{
    if(taille <= 0)
    {
        ptr = nullptr;
        ErreurCreation excep(CREATION,"taille incorrecte lors de la création du tableau");
        throw (excep);
    }
    ptr = new int[taille];
}
Tableau::~Tableau()
{
    if(ptr != nullptr)
        delete[] ptr;
}
#endif // TABLEAU_H
