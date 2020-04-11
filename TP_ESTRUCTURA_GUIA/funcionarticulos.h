#ifndef FUNCIONARTICULOS_H_INCLUDED
#define FUNCIONARTICULOS_H_INCLUDED

void cargarArticulos(Articulos *vArt,int *con)
{
   cout<<" CODIGO DE ARTICULO: ";
   cin>>vArt[*con].articulos;
   cout<< "DESCRPCION: ";
   cin>>vArt[*con].descripcion;
   cout<<" PRECIO UNITARIO ";
   cin>>vArt[*con].preciouni;
   cout<<" UNIDADES EN STOCK: ";
   cin>>vArt[*con].unistock;
   *con+=1;
}

#endif // FUNCIONARTICULOS_H_INCLUDED
