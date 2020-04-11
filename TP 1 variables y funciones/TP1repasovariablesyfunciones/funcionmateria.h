#ifndef FUNCIONMATERIA_H_INCLUDED
#define FUNCIONMATERIA_H_INCLUDED

void cargarMateria(Materia *vMat,int *con)
{
    bool salir = false;
    int x = 0;
    cout<<"---------------------------------------"<<endl;
    while(salir == false)
    {
        int op;
        cout<<" NUMERO DE MATERIA (1 A 20) ";
        cin>>vMat[x].nummateria;
        cout<<" NOMBRE DE LA MATERIA: ";
        cin>>vMat[x].nombre;
        cout<<" CANTIDAD DE ALUMNOS INSCRIPTOS: ";
        cin>>vMat[x].cantalumnos;
        cout<<" CANTIDAD DE PROFESORES: ";
        cin>>vMat[x].cantprofesores;
        cout<<endl;
        cout<<"***************************************"<<endl;
        cout<<" SEGUIR CARGANDO MATERIAS?( 1-SI 2-NO) "<<endl;
        cout<<" --> ";
        cin>>op;
        cout<<"***************************************"<<endl;
        *con +=1;
        switch(op)
        {
        case 1:
            {
                salir = false;
            }break;
        case 2:
            {
                salir = true;
            }break;
        default:
            {
                cout<<endl;
                cout<<"*****************************"<<endl;
                cout<<"*****************************"<<endl;
                cout<<" ***     ERROR 404       *** "<<endl;
                cout<<"*****************************"<<endl;
                cout<<"*****************************"<<endl;
                cout<<endl;
                system("pause");
            }break;
        }
        cout<<"***************************************"<<endl;
        cout<<endl;
        cout<<"---------------------------------------"<<endl;
        x++;
    }
}

#endif // FUNCIONMATERIA_H_INCLUDED
