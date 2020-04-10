#ifndef FUNCION_H_INCLUDED
#define FUNCION_H_INCLUDED

const int tam = 10;

struct Producto{

   int id;
   char nombre[30];
   float precio;
   int stock;
   int stockmin;
};
void cargarProducto(Producto *vPro,int *cont)
{
        int aux;
        bool existe = false;
        cout<<" ID DEL PRODUCTO: ";
        cin>>aux;
        for(int x=0;x<2;x++)
        {
            if(aux == vPro[x].id)
            {
                existe = true;
            }
        }
        if(!existe)
        {
       vPro[*cont].id = aux;
       cout<<" NOMBRE DEL PRODUCTO: ";
       cin>>vPro[*cont].nombre;
       cout<<" PRECIO DEL PRODUCTO: ";
       cin>>vPro[*cont].precio;
       cout<<" STOCK DISPONIBLE: ";
       cin>>vPro[*cont].stock;
       cout<<" STOCK MINIMO: ";
       cin>>vPro[*cont].stockmin;
       cout<<endl;
       cout<<" ------------------------------- "<<endl;
       cout<<"  datos ingresado correctamente "<<endl;
       cout<<" ------------------------------- "<<endl;
       cout<<endl;
       *cont+=1;
        }
        else
        {
            system("cls");
            cout<<" ************************** "<<endl;
            cout<<" -- EL CODIGO YA EXISTE -- "<<endl;
            cout<<" ************************** "<<endl;
            system("pause");
            system("cls");
        }
}
int buscarid(Producto *vPro,int tam,int *idedit) /// buscar id
{
    for(int x=0;x<tam;x++)
    {
        if(vPro[x].id == *idedit)
        {
           return x; ///envia la posicion del id que coincida
        }
    }
    return -1; /// si no lo encuentra envia -1

}
void editarProducto(Producto *vPro,int *posid)
{
    system("cls");
    cout<<" PRODUCTO --> "<<vPro[*posid].id<<endl;
    cout<<" -------------------- "<<endl;
    cout<<" NUEVO NOMBRE: ";
    cin>>vPro[*posid].nombre;
    cout<<" NUEVO PRECIO: ";
    cin>>vPro[*posid].precio;
    cout<<" NUEVO STOCK: ";
    cin>>vPro[*posid].stock;
    cout<<" NUEVO STOCK MINIMO: ";
    cin>>vPro[*posid].stockmin;
    cout<<" --------------------- "<<endl;
}
void listarProductoxid(Producto *vPro,int tam,int *posicionid)
{
    cout<<" ======================================================================= "<<endl;
    cout<<"   ID    -    NOMBRE    -    PRECIO    -    STOCK    -   STOCK MINIMO    "<<endl;
    cout<<" ======================================================================= "<<endl;
    cout<<"   "<<vPro[*posicionid].id;
    cout<<"          "<<vPro[*posicionid].nombre;
    cout<<"           "<<"$"<<vPro[*posicionid].precio;
    cout<<"              "<<vPro[*posicionid].stock;
    cout<<"                "<<vPro[*posicionid].stockmin<<endl;
    cout<<" ======================================================================= "<<endl;
}
void ordenarmayorxPrecio(Producto *vPro,Producto *aux,int tam)
{
    int bandera = 0;
   for(int x=0;x<tam;x++)
   {
       for(int y=0;y<tam+1;y++)
       {
           if(vPro[y].precio < vPro[y+1].precio || bandera == 0)
           {
               bandera = 1;
               aux[y] = vPro[y];
               vPro[y] = vPro[y+1];
               vPro[y+1] = aux[y];
           }

       }
   }
}
void listarproductosxPrecio(Producto *vPro,int tam)
{
    for(int x=0;x<tam;x++)
    {
        if(vPro[x].precio!=0)
        {
        cout<<endl;
        cout<<" ================================================================================ "<<endl;
        cout<<"    ID     -     NOMBRE     -     PRECIO     -     STOCK     -   STOCK MINIMO     "<<endl;
        cout<<" ================================================================================ "<<endl;
        cout<<"    "<<vPro[x].id;
        cout<<"            "<<vPro[x].nombre;
        cout<<"              "<<"$"<<vPro[x].precio;
        cout<<"                 "<<vPro[x].stock;
        cout<<"                 "<<vPro[x].stockmin<<endl;
        cout<<" ================================================================================ "<<endl;
        }
    }

}

void menuProductos()
{
    char Opproductos;
    bool salirproductos = false;
    struct Producto vecPro[tam] = {0};
    struct Producto aux[tam] = {0};
    int cont = 0;
    while(!salirproductos)
    {
        system("cls");
        system("color 07");
        cout<<"---------------------------------------------"<<endl;
        cout<<"  MENU PRODUCTOS"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<" 1 - Cargar producto "<<endl;
        cout<<" 2 - Editar producto x ID "<<endl;
        cout<<" 3 - Listar producto x ID "<<endl;
        cout<<" 4 - Listar productos (ordenados por precio)"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<" 0 - Salir del programa "<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"   OPCION: ";
        Opproductos = cin.get();
        cin.sync();
        cin.clear();
    switch(Opproductos)
    {
    case '1':
        {
            system("cls");
            if(cont<10)
            {
                cargarProducto(vecPro,&cont);
            }
            else
            {
                cout<<" ================================= "<<endl;
                cout<<" Solo se pueden cargar "<<cont<<" productos"<<endl;
                cout<<" ================================== "<<endl;
            }
            cout<<endl;
            system("pause");
        }break;
    case '2':
        {
            system("cls");
            int idedit,posicionid;
            cout<<" Ingrese la id para editar sus datos: ";
            cin>>idedit;
            posicionid = buscarid(vecPro,tam,&idedit);
            if(posicionid >=0)
            {
                editarProducto(vecPro,&posicionid);
            }
            else
            {
                cout<<endl;
                cout<<" *** La ID ingresada no existe *** "<<endl;
                cout<<endl;
            }
            getch();
        }break;
    case '3':
        {
            system("cls");
            int idedit,posicionid;
            cout<<" Ingrese la ID para listarlo por pantalla --> ";
            cin>>idedit;
            posicionid = buscarid(vecPro,tam,&idedit);
            if(posicionid>=0)
            {
              listarProductoxid(vecPro,tam,&posicionid);
            }
            else
            {
                cout<<endl;
                cout<<" *** La id ingresada no existe *** "<<endl;
                cout<<endl;
            }
            getch();
        }break;
    case '4':
        {
            system("cls");
            ordenarmayorxPrecio(vecPro,aux,tam);
            listarproductosxPrecio(vecPro,tam);
            getch();
        }break;
    case '0':
        {
            system("cls");
            char Opcionsalir;
            cout<<" ====================================== "<<endl;
            cout<<"    SEGURO QUE DESEA SALIR? ( Y - N )   "<<endl;
            cout<<" ====================================== "<<endl;
            cout<<" SU OPCION --> ";
            cin>>Opcionsalir;
            switch(Opcionsalir)
            {
            case 'Y':
            case 'y':
                {
                    salirproductos = true;
                }break;
            case 'N':
            case 'n':
                {
                   salirproductos = false;
                }break;
            default:
                {
                    system("cls");
                    system("color 04");
                    cout<<" ----------------------- "<<endl;
                    cout<<" --     ERROR 403     -- "<<endl;
                    cout<<" ----------------------- "<<endl;
                    system("pause");
                }break;
            }
        }break;
    }

    }
}



#endif // FUNCION_H_INCLUDED
