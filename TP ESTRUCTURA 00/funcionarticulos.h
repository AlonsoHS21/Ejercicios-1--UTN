#ifndef FUNCIONARTICULOS_H_INCLUDED
#define FUNCIONARTICULOS_H_INCLUDED

const int tam = 2;

struct Articulos{
char codarticulos[5];
char descripcion[30];
float precio;
int stock;
}vArt[tam] = {0},vAux[tam] ={0};

void menuArticulos()
{
    system("cls");
    char Oparticulos;
    int cont = 0;
    bool salirarticulos = false;
    while(!salirarticulos)
    {
        cout<<"-----------------------------"<<endl;
        cout<<"       MENU ARTICULOS        "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<" A) CARGAR ARTICULOS         "<<endl;
        cout<<" B) MOSTRAR ARTICULOS        "<<endl;
        cout<<" C) MODIFICAR ARTICULOS      "<<endl;
        cout<<" D) AGREGAR ARTICULOS        "<<endl;
        cout<<" E) VOLVER AL MENU PRINCIPAL "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<" OPCION --> ";
        cin>>Oparticulos;
        switch(Oparticulos)
        {
        case 'A':
        case 'a':
            {
                if(cont<tam)
                {
                  cargarArticulos(vArt,tam,vAux,&cont);
                }
                else
                {
                    cout<<" ============================================== "<<endl;
                    cout<<"  NO SE PUEDE CARGAR MAS DE "<<cont<<" PRODUCTOS"<<endl;
                    cout<<" ============================================== "<<endl;
                }

            }break;
        }
    }
}
void cargarArticulos(Articulos *vArt,int *cont,Articulos *vAux,int *contador)
{
   bool existe = false;
   cout<<" ------------------------- "<<endl;
   for(int x=0;x<2;x++)
   {
       cout<<" CODIGO DE ARTICULO: ";
       cin>>vAux[*cont].codarticulos;
       if(vArt[x].codarticulos == vAux[*cont].codarticulos)
       {
           existe = true;
       }
   }
   if(!existe)
   {
       vArt[*cont].codarticulos = vAux[*cont].codarticulos;
       cout<<" DESCRIPCION: ";
       cin>>vArt[*cont].descripcion;
       cout<<" PRECIO: $";
       cin>>vArt[*cont].precio;
       cout<<" STOCK DISPONIBLE: ";
       cin>>vArt[*cont].stock;
       cout<<" ------------------------- "<<endl;
       *cont+=1;
   }
   else
   {
       cout<<" ========================== "<<endl;
       cout<<" El codigo ya fue ingreasdo "<<endl;
       cout<<" ========================== "<<endl;
   }
   getch();
}



#endif // FUNCIONARTICULOS_H_INCLUDED
