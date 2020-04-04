#include <iostream>
#include <cstdlib>
#include "funcionrepaso2.h"

using namespace std;

int main()
{
    int op;
    bool salir = false;
    while(!salir)
    {
        system("cls");
        cout<<"------------------------------------"<<endl;
        cout<<"           MENU PRINCIPAL           "<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<" 1 - VECTORES "<<endl;
        cout<<" 2 - MATRICES "<<endl;
        cout<<" 3 - COMBINADOS "<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<" 4 - SALIR DEL PROGRAMA "<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"ELIJA UNA OPCION: ";
        cin>>op;
        cin.get();
        switch(op)
        {
        case 1:
            {
                system("cls");
                char op2;
                bool salirvectores = false;
                cout<<endl;
                while(!salirvectores)
                {
                   int vec[10] = {1,-2,-3,4,5,6,7,8,9,10};
                   system("cls");
                   cout<<"--------------------------------"<<endl;
                   cout<<"       MENU DE VECTORES         "<<endl;
                   cout<<"--------------------------------"<<endl;
                   cout<<" A - VALOR MINIMO DEL VECTOR    "<<endl;
                   cout<<" B - VALOR MAXIMO DEL VECTOR    "<<endl;
                   cout<<" C - POSICION VALOR MINOMO      "<<endl;
                   cout<<" D - POSICION VALOR MAXIMO      "<<endl;
                   cout<<" E - EXISTE O NO EXISTE         "<<endl;
                   cout<<" F - POSICION EN CASO DE EXISTIR"<<endl;
                   cout<<" G - CANTIDAD DE REPETICIONES   "<<endl;
                    cout<<"-------------------------------"<<endl;
                   cout<<" H - SALIR AL MENU PRINCIPAL    "<<endl;
                   cout<<"--------------------------------"<<endl;
                   cout<<"Elija una opcion: ";
                   cin>>op2;
                   cin.get();
                   switch(op2)
                   {
                   case 'A':
                   case 'a':
                    {
                        system("cls");
                        Punto1vec(vec,10);
                        cin.ignore();
                        cin.get();

                    }break;
                   case 'B':
                   case 'b':
                    {
                        system("cls");
                        Punto2vec(vec,10);
                        cin.ignore();
                        cin.get();
                    }break;
                   case 'C':
                   case 'c':
                    {
                        system("cls");
                        Punto3vec(vec,10);
                        cin.ignore();
                        cin.get();
                    }break;
                   case 'D':
                   case 'd':
                    {
                        system("cls");
                        Punto4vec(vec,10);
                        cin.ignore();
                        cin.get();

                    }break;
                   case 'E':
                   case 'e':
                    {
                        system("cls");
                        cout<<endl;
                        int numVF;
                        bool verdadero_falso;
                        cout<<" Ingrese un numero para buscar si existe en el vector: ";
                        cin>>numVF;
                        cout<<endl;
                        verdadero_falso = Punto5vec(vec,10,&numVF);
                        cout<<endl;
                        if(verdadero_falso == true)
                        {
                            cout<<" VERDADERO "<<endl;
                        }
                        else
                        {
                            cout<<" FALSO "<<endl;
                        }
                        cin.ignore();
                        cin.get();

                    }break;
                   case 'F':
                   case 'f':
                    {
                        system("cls");
                        int numPOS,posicion;
                        cout<<" Ingrese un numero para verificar su posicion en el vector: ";
                        cin>>numPOS;
                        posicion = Punto6vec(vec,10,&numPOS);
                        if(posicion >= 0)
                        {
                            cout<<" La posicion es : "<<posicion<<endl;
                        }
                        else
                        {
                            cout<<posicion<<endl;
                        }
                        cin.ignore();
                        cin.get();

                    }break;
                   case 'g':
                   case 'G':
                    {
                        system("cls");
                        cout<<endl;
                        int numcant,cant;
                        cout<<" Ingrese un numero para ver la cantidad de veces que se repite en el vector: ";
                        cin>>cant;
                        numcant = Punto7vec(vec,10,&cant);
                        cout<<"-----------------------------------------------------------------------------------"<<endl;
                        cout<<" La cantidad de veces que se repite el numero ingresado es: "<<numcant<<endl;
                        cin.ignore();
                        cin.get();

                    }break;
                    case 'H':
                    case 'h':
                    {
                        salirvectores = true;

                    }break;
                    default:
                        {
                            system("cls");
                            cout<<endl;
                            cout<<"------------------------"<<endl;
                            cout<<"-- CODIGO INCORRECTO -- "<<endl;
                            cout<<"------------------------"<<endl;
                            cin.ignore();
                            cin.get();
                        }break;
                   }

                }


            }break;
                case 4:
                        {
                            system("cls");
                            cout<<endl;
                            int opsalir;
                            cout<<" SEGURO DESEA SALIR DEL PROGRAMA? ( 1- SI , 2 - NO ): ";
                            cin>>opsalir;
                            switch(opsalir)
                            {
                            case 1:
                                {
                                    salir = true;

                                }break;
                            case 2:
                                {
                                    salir = false;

                                }break;
                            default:
                                {
                                    system("cls");
                                    cout<<endl;
                                    cout<<"-----------------------"<<endl;
                                    cout<<"-- CODIGO INCORRECTO --"<<endl;
                                    cout<<"-----------------------"<<endl;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            }

                        }break;

        }

    }
    return 0;
}
