#ifndef FUNCIONREPASO2_H_INCLUDED
#define FUNCIONREPASO2_H_INCLUDED

using namespace std;
void Punto1vec(int *vec1,int tam)
{
    int minimo,bandera = 0;
    for(int x = 0;x<tam;x++)
    {
       if(vec1[x]<minimo || bandera == 0)
       {
          minimo = vec1[x];
          bandera = 1;
       }
    }
    cout<<endl;
    cout<<" El valor minimo del vector es : "<<minimo<<endl;
}
void Punto2vec(int *vec2,int tam)
{
    int maximo,bandera = 0;
    for(int x = 0;x<tam;x++)
    {
        if(vec2[x]>maximo || bandera == 0)
        {
            bandera = 1;
            maximo = vec2[x];
        }
    }
    cout<<endl;
    cout<<" El valor maximo del vector es: "<<maximo<<endl;
}
void Punto3vec(int *vec3,int tam)
{
    int bandera = 0;
    int minimo,posicionmin;
    for(int x = 0;x<tam;x++)
        {
            if(vec3[x]<minimo || bandera == 0)
            {
                bandera = 1;
                minimo = vec3[x];
                posicionmin = x;
            }
        }
        cout<<endl;
        cout<<" La posicion del minimo elemento del vector es: "<<posicionmin<<endl;

}
void Punto4vec(int *vec4,int tam)
{
    int maximo,posicionmax;
    int bandera = 0;
    for(int x=0;x<tam;x++)
    {
        if(vec4[x]>maximo || bandera == 0)
        {
            bandera = 1;
            maximo = vec4[x];
            posicionmax = x;
        }
    }
    cout<<endl;
    cout<<" La posicio del maximo elemento del vector es: "<<posicionmax<<endl;
}
int Punto5vec(int *vec5,int tam,int *numVerFal)
{
    bool verdadero_falso = false;
    for(int x=0;x<tam;x++)
    {
        if(*numVerFal == vec5[x])
        {
           verdadero_falso = true;

        }

    }
    return verdadero_falso;
}
int Punto6vec(int *vec6,int tam,int *numPOS)
{
    int posicion = -1;
    for(int x=0;x<tam;x++)
    {
        if(*numPOS == vec6[x])
        {
           posicion = x;
        }

    }
    return posicion;
}
int Punto7vec(int *vec7,int tam,int *cantidad)
{
    int contcant = 0;
    for(int x = 0;x<tam;x++)
    {
        if(*cantidad == vec7[x])
        {
            contcant ++;
        }
    }
    return contcant;
}
int Punto1mat(int mat1[2][2],int *num)
{
    int maximo;
    int bandera = 0;
    for(int x = 0;x<2;x++)
    {
        for(int y = 0;y<2;y++)
        {
           if(mat1[*num][y] > maximo || bandera == 0)
           {
               bandera = 1;
               maximo = mat1[*num][y];
           }
        }
    }
    return maximo;
}
int Punto2mat(int mat2[2][2],int *num)
{
    int posicion,maximo;
    int bandera = 0;
        for(int y=0;y<2;y++)
        {
            if(mat2[*num][y] > maximo || bandera == 0)
            {
                bandera = 1;
                maximo = mat2[*num][y];
                posicion = y;
            }
        }
    return posicion;
}
int Punto3mat(int mat[2][2],int *num)
{
    int sumatotal = 0;
    for(int x=0;x<2;x++)
    {
        sumatotal += mat[x][*num];
    }
    return sumatotal;
}
int Punto4mat(int mat[2][2],int *num)
{
    int positivos = 0;
    for(int x=0;x<2;x++)
    {
        if(mat[x][*num] > 0 )
        {
            positivos++;
        }
    }
    return positivos;
}
int Punto5mat(int mat[2][2])
{
    int total = 0;
    for(int x=0;x<2;x++)
    {
        for(int y =0;y<2;y++)
        {
            total += mat[x][y];
        }
    }
    return total;
}
void Ejercicioscombinados1(int sucursalmat[5][3])
{
    int Numero_articulo,Numero_sucursal,cantidad_vendida;
    cout<<"----------------------------------------------"<<endl;
    cout<<" Ingrese el N° de articulo ( 1 a 5 ): ";
    cin>>Numero_articulo;
    while(Numero_articulo!=0)
    {
        cout<<" Ingrese la sucursal de venta ( 1 a 3): ";
        cin>>Numero_sucursal;
        cout<<" Ingrese la cantidad vendida: ";
        cin>>cantidad_vendida;
        sucursalmat[Numero_articulo-1][Numero_sucursal-1] += cantidad_vendida;
        cout<<"----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<" Ingrese en N° de articulo ( 1 a 5 ): ";
        cin>>Numero_articulo;
    }
}
void PuntoAcombi(int mat[5][3])
{
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<3;y++)
        {
            if(mat[x][y]!=0)
            {
                cout<<endl;
                cout<<"--------------------------------------------------------------------------------"<<endl;
                cout<<" Articulo "<<x+1<<" - "<<"Sucursal "<<y+1<<" - "<<" cantidad vendida: "<<mat[x][y]<<endl;
                cout<<"--------------------------------------------------------------------------------"<<endl;
            }

        }
    }
}
void PuntoBcombi(int mat[5][3])
{
    int sucursal[3] = {0};
    bool bandera = 0;
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<3;y++)
        {
            if(mat[x][y] > sucursal[y] || bandera ==0)
            {
                bandera = 1;
                sucursal[y] = mat[x][y];
            }

        }
    }
    cout<<endl;
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"                          PUNTO B                          "<<endl;
    for(int x=0;x<3;x++)
    {
        if(sucursal[x]!=0)
        {
            cout<<"--------------------------------------------------------------"<<endl;
            cout<<" Para la sucursal "<<x+1<<" el maximo fue de: "<<sucursal[x]<<endl;
        }

    }
}

#endif // FUNCIONREPASO2_H_INCLUDED
