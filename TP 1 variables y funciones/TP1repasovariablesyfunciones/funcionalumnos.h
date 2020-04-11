#ifndef FUNCIONALUMNOS_H_INCLUDED
#define FUNCIONALUMNOS_H_INCLUDED

void cargarAlumnos(Alumnos *vAlum,int *con)
{
    int x=0;
    int dia,mes;
    do
    {
        cout<<" INGRESE EL N° DE LEGAJO: ";
        cin>>vAlum[x].legajo;
        cout<<" INGRESE LA FECHA DE ACCESO  "<<endl;
        cout<<" ---------------"<<endl;
        cout<<"  DIA --> ";
        cin>>dia;
        cout<<"  MES --> ";
        cin>>mes;
        cout<<"---------------"<<endl;
        vAlum[x].fechadia = dia;
        vAlum[x].fechames = mes;
        cout<<" NUMERO DE LA MATERIA A LA QUE INGRESA: ";
        cin>>vAlum[x].nummateria;
        cout<<" CANTIDA DE HORAS: ";
        cin>>vAlum[x].canthoras;
        x++;
        *con +=1;
    }while(vAlum[x].legajo!=0);
}


#endif // FUNCIONALUMNOS_H_INCLUDED
