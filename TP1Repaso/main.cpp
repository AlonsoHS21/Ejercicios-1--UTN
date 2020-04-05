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
                    case 2:
                        {
                            system("cls");
                            int mat[2][2] = {{1,2},{-1,10}};
                            bool salirmatriz = false;
                            while(!salirmatriz)
                            {
                            system("cls");
                            char opmatriz;
                            cout<<"---------------------------------------"<<endl;
                            cout<<"          MENU DE MATRICES             "<<endl;
                            cout<<"---------------------------------------"<<endl;
                            cout<<" A - MAXIMO DE LA FILA INDICADA        "<<endl;
                            cout<<" B - POSICION MAXIMO EN LA FILA        "<<endl;
                            cout<<" C - SUMA DE LAS COLUMNAS              "<<endl;
                            cout<<" D - CANTIDADS NUMEROS POSITIVOS       "<<endl;
                            cout<<" E - SUMA DE TODA LA MATRIZ            "<<endl;
                            cout<<"---------------------------------------"<<endl;
                            cout<<" F - SALIR AL MENU PRINCIPAL           "<<endl;
                            cout<<"---------------------------------------"<<endl;
                            cout<<" ELIJE UNA OPCION: ";
                            cin>>opmatriz;
                            cout<<"---------------------------------------"<<endl;
                            cin.get();
                            switch(opmatriz)
                            {
                            case 'A':
                            case 'a':
                                {
                                    system("cls");
                                    int numfila1,maximofila;
                                    cout<<"Ingrese un numero entre el 0 y el 1 para buscar el maximo de la fila: ";
                                    cin>>numfila1;
                                    maximofila = Punto1mat(mat,&numfila1);
                                    cout<<"---------------------------------------------------------------------------"<<endl;
                                    cout<<"El maximo numero del la matriz en la fila "<<numfila1<<" es: "<<maximofila;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            case 'B':
                            case 'b':
                                {
                                    system("cls");
                                    int numfila2,posmaximofila;
                                    cout<<"Ingrese un numero entre el 0 y el 1 para buscar la posicion del maximo de la fila: ";
                                    cin>>numfila2;
                                    posmaximofila = Punto1mat(mat,&numfila2);
                                    cout<<"----------------------------------------------------------------------------------"<<endl;
                                    cout<<" La posicion del maximo numero de la matriz "<<endl;
                                    cout<<" FILA: "<<numfila2<<endl;
                                    cout<<" COLUMNA "<<posmaximofila;
                                    cin.ignore();
                                    cin.get();

                                }break;
                            case 'C':
                            case 'c':
                                {
                                    system("cls");
                                    int numcolum1,sumatotal;
                                    cout<<endl;
                                    cout<<" Ingrese un numero entre 0 y 1 que indique la columna para sumas los elementos: ";
                                    cin>>numcolum1;
                                    sumatotal = Punto3mat(mat,&numcolum1);
                                    cout<<"------------------------------------------------------------------------"<<endl;
                                    cout<<" La suma de todos los elementos de la columna de la matriz es de : "<<sumatotal<<endl;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            case 'D':
                            case 'd':
                                {
                                    system("cls");
                                    cout<<endl;
                                    int numcolum2;
                                    cout<<" Ingrese un numero entre 0 y 1 para indicar a que parte de la columna va a mostrar la cantidad de positivos: ";
                                    cin>>numcolum2;
                                    int positivos = Punto4mat(mat,&numcolum2);
                                    cout<<"----------------------------------------------------------------------------------------"<<endl;
                                    cout<<" La cantidad de componentes positivos de la columna indicada es : "<<positivos<<endl;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            case 'e':
                            case 'E':
                                {
                                    system("cls");
                                    int total = Punto5mat(mat);
                                    cout<<endl;
                                    cout<<"------------------------------------------------------------------"<<endl;
                                    cout<<" La suma de todos los elementos de la matriz es : "<<total<<endl;
                                    cout<<"------------------------------------------------------------------"<<endl;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            case 'F':
                            case 'f':
                                {
                                    salirmatriz = true;

                                }break;
                            default:
                                {
                                    system("cls");
                                    cout<<endl;
                                    cout<<"---------------------------"<<endl;
                                    cout<<" --- CODIGO INCORRECTO --- "<<endl;
                                    cout<<"---------------------------"<<endl;
                                    cin.ignore();
                                    cin.get();
                                }break;
                            }
                        }
                    }break;
                            case 3:
                                {
                                    system("cls");
                                    char opcombinados;
                                    bool salircombinados = false;
                                    while(!salircombinados)
                                    {
                                        system("cls");
                                        cout<<endl;
                                        cout<<"----------------------------------------------------------------------"<<endl;
                                        cout<<" A - UNA EMPRESA VENDE 5 DIFERENTES TIPO DE ARTICULOS EN 3 SUCURSALES "<<endl;
                                        cout<<"----------------------------------------------------------------------"<<endl;
                                        cout<<" E - SALIR DEL PROGRAMA                                               "<<endl;
                                        cout<<"----------------------------------------------------------------------"<<endl;
                                        cout<<" ELIJE UNA OPCION: ";
                                        cin>>opcombinados;
                                        cin.get();
                                        switch(opcombinados)
                                        {
                                        case 'A':
                                        case 'a':
                                            {
                                                system("cls");
                                                int sucursalmat[5][3] = {0};
                                                Ejercicioscombinados1(sucursalmat);
                                                PuntoAcombi(sucursalmat);
                                                PuntoBcombi(sucursalmat);
                                                cin.ignore();
                                                cin.get();
                                            }break;
                                        case 'B':
                                        case 'b':
                                            {

                                            }break;
                                        case 'C':
                                        case 'c':
                                            {

                                            }break;
                                        case 'D':
                                        case 'd':
                                            {

                                            }break;
                                        case 'E':
                                        case 'e':
                                            {
                                                salircombinados = true;
                                            }break;
                                        default:
                                            {
                                                system("cls");
                                                cout<<endl;
                                                cout<<"---------------------------"<<endl;
                                                cout<<" --- CODIGO INCORRECTO --- "<<endl;
                                                cout<<"---------------------------"<<endl;
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
