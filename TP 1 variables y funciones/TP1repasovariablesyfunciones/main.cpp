#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <clocale>
const int tam = 20;

struct Materia{
int nummateria;
char nombre[20];
int cantalumnos;
int cantprofesores;
}vMat[tam] = {0},aux[tam] ={0};

struct Alumnos{
 int legajo;
 int fechadia;
 int fechames;
 int nummateria;
 float canthoras;
}vAlum[tam] = {0}; ///nose cuantos alumnos van a ser pero le pongo 20


using namespace std;
#include "funcionmateria.h"
#include "funcionalumnos.h"
#include "funcionrespuestas.h"


int main()
{
    setlocale(LC_ALL,"spanish");
    char Op;
    bool salirmenu = false;
    int contmateria = 0;
    int contalumnos = 0;
    while(!salirmenu)
    {
        system("cls");
        system("color 07");
        cout<<" ----------------------- "<<endl;
        cout<<" A - INGRESO MATERIAS    "<<endl;
        cout<<" B - INGRESO ALUMNOS     "<<endl;
        cout<<" C - RESPUESTAS          "<<endl;
        cout<<" D - SALIR               "<<endl;
        cout<<" ----------------------- "<<endl;
        cout<<"   OPCIÓN : ";
        Op = cin.get();
        cin.sync();
        cin.clear();
        system("cls");
        switch(Op)
        {
        case 'A':
        case 'a':
            {
                cargarMateria(vMat,&contmateria);
            }break;
        case 'B':
        case 'b':
            {
                cargarAlumnos(vAlum,&contalumnos);
            }break;
        case 'C':
        case 'c':
            {
               char op;
               cout<<" =================================================================================================================== "<<endl;
               cout<<" A - LAS MATERIA QUE NO TUVIERON ACCESO NUNCA "<<endl;
               cout<<" B - LA MATERIA QUE MAS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS"<<endl;
               cout<<" C - POR CADA MATERIA Y DIA DE MARZO, LA CANTIDAD DE ACCESO DE ALUMNOS A LAS AULAS VIRTUALES"<<endl;
               cout<<" D - PARA CADA MATERIA INDICAR LA CANTIDAD DE ALUMNOS POR PROFESOR "<<endl;
               cout<<" G - UN LISTADO ORDENADO DE MAYOR A MENOR POR CANTIDAD DE ALUMNOS Y DEBE MOSTAR TODOS LOS DATOS DE EL STRUCT MATERIA"<<endl;
               cout<<" =================================================================================================================== "<<endl;
               cout<<" OPCION ";
               op = cin.get();
               cin.sync();
               cin.clear();
               switch(op)
               {
               case 'A':
               case 'a':
                {
                  if(!(contalumnos == 0 && contmateria == 0))
                     {
                          PuntoA(vAlum,tam,vMat);
                     }
                   else
                     {
                        system("cls");
                        cout<<" ==================================== "<<endl;
                        cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                        cout<<" ==================================== "<<endl;
                        system("pause");
                     }
                }break;
               case 'B':
               case 'b':
                {
                    if(!(contalumnos == 0 && contmateria == 0))
                     {
                  PuntoB(vAlum,tam,vMat);
                     }
                   else
                     {
                         system("cls");
                      cout<<" ==================================== "<<endl;
                      cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                      cout<<" ==================================== "<<endl;
                      system("pause");
                     }
                }break;
               case 'C':
               case 'c':
                {
                    if(!(contalumnos == 0 && contmateria == 0))
                    {
                        PuntoC(vMat,vAlum,tam);
                    }
                    else
                    {
                        system("cls");
                      cout<<" ==================================== "<<endl;
                      cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                      cout<<" ==================================== "<<endl;
                      getch();
                    }
                }break;
               case 'D':
               case 'd':
                {
                    if(!(contalumnos == 0 && contmateria == 0))
                    {
                        PuntoD(vMat,vAlum,tam);
                    }
                    else
                    {
                        system("cls");
                      cout<<" ==================================== "<<endl;
                      cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                      cout<<" ==================================== "<<endl;
                      getch();
                    }
                }break;
               case 'E':
               case 'e':
                {
                    if(!(contalumnos == 0 && contmateria == 0))
                    {
                        //PuntoE(vMat,vAlum,tam);
                    }
                    else
                    {
                        system("cls");
                      cout<<" ==================================== "<<endl;
                      cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                      cout<<" ==================================== "<<endl;
                      getch();
                    }
                }break;
               case 'G':
               case 'g':
                {
                    if(!(contalumnos == 0 && contmateria == 0))
                    {
                        ordenarmayormenor(vMat,vAlum,tam,aux);
                        PuntoG(vMat,vAlum,tam);
                    }
                    else
                    {
                        system("cls");
                      cout<<" ==================================== "<<endl;
                      cout<<" NO HAY MATERIA NI ALUMNOS INGRESADOS "<<endl;
                      cout<<" ==================================== "<<endl;
                      getch();
                    }
                }break;
              }
            }break;
        case 'D':
        case 'd':
            {
                cout<<endl;
                char Opsalir;
                cout<<" ================================ "<<endl;
                cout<<" SEGURO QUE DESEA SALIR? ( Y - N )"<<endl;
                cout<<" ================================ "<<endl;
                cout<<"  OPCION --> ";
                Opsalir = cin.get();
                cin.sync();
                cin.clear();
                switch(Opsalir)
                {
                case 'Y':
                case 'y':
                    {
                        salirmenu = true;
                    }break;
                case 'N':
                case 'n':
                    {
                        salirmenu = false;
                    }break;
                default:
                    {
                        system("cls");
                        cout<<endl;
                        cout<<" ************************ "<<endl;
                        cout<<" ************************ "<<endl;
                        cout<<"  **     ERROR 404     ** "<<endl;
                        cout<<" ************************ "<<endl;
                        cout<<" ************************ "<<endl;
                        system("pause");
                    }break;
                }

            }break;
        }
    }
    return 0;
}
