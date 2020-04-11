#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

const int TAM = 50;

struct Articulos{
char articulos[5];
char descripcion[30];
float preciouni;
int unistock;
}vArt[TAM] = {0};
#include "funcionarticulos.h"

int main()
{
    int op;
    bool salir = false;
    int contart = 0;
    while(!salir)
    {
    cout<<" ----------------------------- "<<endl;
    cout<<"  MENU PRINCIPAL "<<endl;
    cout<<" ----------------------------- "<<endl;
    cout<<" 1 - CARGAR ARTICULOS "<<endl;
    cout<<" ----------------------------- "<<endl;
    cout<<" OPCION: ";
    op = cin.get();
    cin.sync();
    cin.clear();
    system("cls");
    switch(op)
    {
    case '1':
        {
            if(contart<2)
            {
               cargarArticulos(vArt,&contart);
            }
            else
            {
                cout<<" SOLO SE PUEDE CARGAR "<<contart<< "PRODUCTOS"<<endl;
            }

        }break;
    case '2':
        {

        }break;
    default:
        {
            cout<<" ********************** "<<endl;
            cout<<" ****  ERROR 404  ***** "<<endl;
            cout<<" ********************** "<<endl;

        }break;
    }

    }
}
