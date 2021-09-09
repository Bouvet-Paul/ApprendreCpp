#ifndef CLASSEERREUR_H
#define CLASSEERREUR_H
#include <string>

enum erreurs
{
    CREATION,
    INDICE
};

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

#endif // CLASSEERREUR_H
