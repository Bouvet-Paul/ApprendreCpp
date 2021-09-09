#ifndef MENU_H
#define MENU_H
#include <string>

using namespace std;

class Menu
{
 public:
    Menu(const string &_nom);
    ~Menu();
    static void AttendreAppuiTouche();
    int afficher();
private:
    string nom;
    string * option;
    int nbOption;
    int longueurMax;
};


#endif // MENU_H
