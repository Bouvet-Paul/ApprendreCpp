#ifndef TABLEAU_H
#define TABLEAU_H
#include <string>
class ErreurCreation
{
private:
    int codeErreur;
    string message;
public:
    ErreurCreation(int _codeErreur,
      string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

class ErreurIndice
{
private:
    int codeErreur;
    string message;
public:
    ErreurIndice(int _codeErreur,
    string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

enum erreurs
{
    CREATION,
    INDICE
};
#endif // TABLEAU_H
