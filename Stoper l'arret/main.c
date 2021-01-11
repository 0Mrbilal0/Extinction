#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
int car=5;
int main()
{
    char tab[100];
        sprintf(tab,"Shutdown.exe -a");
        system(tab);
        printf("Vous avez arreter l'arret programmer");
        Sleep(5000);
        system("CLS");
        Fermeture();
        return(0);
}

int Fermeture()
{
    while(car>0)
    {

        printf("Fermeture du message dans %d seconds",car);
        car=car-1;
        Sleep(1000);
        system("CLS");
    }
}
