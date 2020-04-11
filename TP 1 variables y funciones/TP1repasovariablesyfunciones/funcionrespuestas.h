#ifndef FUNCIONRESPUESTAS_H_INCLUDED
#define FUNCIONRESPUESTAS_H_INCLUDED

void PuntoA(Alumnos *vAlum,int tam,Materia *vMat)
{
    system("cls");
    int contacceso = 0;
    cout<<" ****************************************************************** "<<endl;
    cout<<" LAS SIGUIENTES MATERIAS NO TUVIERON ACCESO DE ALUMNOS -> ";
    for(int x =0; x<tam;x++)
    {
        if(!vMat[x].nummateria!=0)
        {
            cout<<x<<" | ";
        }
    }
    getch();

}
void PuntoB(Alumnos *vAlum,int tam,Materia *vMat)
{
    int mayorHoras,posicionmayorhoras;
    bool bandera = 0;
    for(int x=0;x<tam;x++)
    {
       if(vAlum[x].canthoras > mayorHoras || bandera == 0)
       {
           bandera = 1;
           mayorHoras = vAlum[x].canthoras;
           posicionmayorhoras = x;
       }
    }
    cout<<" La materia que mas horas acumulo es: ";
    cout<<vMat[posicionmayorhoras].nombre<<endl;
    cout<<endl;
    system("pause");

}
void PuntoC(Materia *vMat,Alumnos *vAlum,int tam)
{
   int contacceso = 0;
   int marzo = 3;
   for(int x=0;x<tam;x++)
   {
       if(vAlum[x].fechames == marzo)
       {
         contacceso++;
       }
   }
   for(int x = 0;x<tam;x++)
   {
       cout<<" Para la materia "<<vMat[x].nombre<<" con fecha de ingreso para el dia "<<vAlum[x].fechadia<<" de "<<marzo<<"fueron  en total de "<<contacceso<<" alumnos"<<endl;
       getch();
   }
}
void PuntoD(Materia *vMat,Alumnos *vAlum,int tam)
{
        cout<<" ========================================================================= "<<endl;
        cout<<"    MATERIA    -    CANTIDAD DE ALUMNOS    -    CANTIDAD DE PROFESORES     "<<endl;
        cout<<" ========================================================================= "<<endl;
    for(int x = 0;x<tam;x++)
    {
        if(vMat[x].cantalumnos!=0)
        {
           cout<<"    "<<vMat[x].nombre;
           cout<<"                    "<<vMat[x].cantalumnos;
           cout<<"                            "<<vMat[x].cantprofesores<<endl;
            cout<<" ------------------------------------------------------------------------- "<<endl;
        }
    }
    getch();
}
void ordenarmayormenor(Materia *vMat,Alumnos *vAlum,int tam,Materia *vAux)
{
    for(int x=0;x<tam+1;x++)
    {
        for(int y=0;y<tam;y++)
        {
            if(vMat[y].cantalumnos < vMat[y+1].cantalumnos)
            {
              vAux[y] = vMat[y];
              vMat[y] = vMat[y+1];
              vMat[y+1] = vAux[y];
            }

        }
    }
}
void PuntoG(Materia *vMat,Alumnos *vAlum,int tam)
{
    system("cls");
    cout<<" ========================================================================================================== "<<endl;
    cout<<"  NUMERO DE MATERIA  -  NOMBRE DE LA MATERIA  -  CANTIDAD DE ALUMNOS INSCRIPTOS  -  CANTIDAD DE PROFESORES"<<endl;
    cout<<" ========================================================================================================== "<<endl;
    for(int x = 0;x<tam;x++)
    {
        if(vMat[x].cantprofesores!=0)
        {
            cout<<"   "<<vMat[x].nummateria;
            cout<<"        "<<vMat[x].nombre;
            cout<<"            "<<vMat[x].cantalumnos;
            cout<<"                 "<<vMat[x].cantprofesores<<endl;
            cout<<" -------------------------------------------------------------------------------------------------------- "<<endl;

        }

    }
    getch();
}



#endif // FUNCIONRESPUESTAS_H_INCLUDED
