#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <clocale>

using namespace std;
#include "funcionarticulos.h"

int main()
{
    setlocale(LC_ALL,"spanish");
    char opMenu;
    bool salirmenuprincipal = false;
    while(!salirmenuprincipal)
    {
        system("cls");
        cout<<" ------------------------- "<<endl;
        cout<<"   MENU PRINCIPAL "<<endl;
        cout<<" ------------------------- "<<endl;
        cout<<"   A - ARTICULOS "<<endl;
        cout<<"   B - VENTAS  "<<endl;
        cout<<"   C - SALIR  "<<endl;
        cout<<" ------------------------- "<<endl;
        cout<<"   OPCION: ";
        opMenu = cin.get();
        cin.sync();
        cin.clear();
        switch(opMenu)
        {
        case 'A':
        case 'a':
            {
                menuArticulos();
            }break;
        case 'B':
        case 'b':
            {

            }break;
        case 'C':
        case 'c':
            {
              salirmenuprincipal =true;
            }break;
        }
    }
    return 0;
}
