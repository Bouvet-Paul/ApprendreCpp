#include "menu.h"

int main()
{
    int choix;
    Menu leMenu("menu.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();
            break;
        // à compléter
        }
    } while(choix != QUITTER);

    return 0;
}
