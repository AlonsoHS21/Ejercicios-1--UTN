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
void Ejercicioscombinados2(int mat[31][12])
{
    int Mes,Dia;
    float Importe;
    cout<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<" Ingrese el mes: ";
    cin>>Mes;
   while(Mes!=0)
   {
       cout<<" Ingrese el dia: ";
       cin>>Dia;
       cout<<" Ingrese el importe del gasto: ";
       cin>>Importe;
       mat[Dia-1][Mes-1] += Importe;
       cout<<"*************************************************************"<<endl;
       cout<<endl;
       cout<<"*************************************************************"<<endl;
       cout<<" Ingrese el mes: ";
       cin>>Mes;

   }
}
void PuntoAcombi2(int mat[31][12])
{
    int bandera = 0;
    int gastomayor,diamayor;
    cout<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    for(int x=0;x<31;x++)
    {
        for(int y=0;y<12;y++)
        {
            if(mat[x][y]!=0)
            {
                cout<<"El Dia "<<x+1<<" - "<<" Mes "<<y+1<<" vendio ---> $"<<mat[x][y]<<endl;
            }
            if(mat[x][y]>gastomayor || bandera == 0)
            {
                bandera = 1;
                gastomayor = mat[x][y];
                diamayor = x+1;
            }
        }
    }
    cout<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
    cout<<" El dia de mayor gasto fue el : "<<diamayor<<" con el importe ----> $"<<gastomayor <<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
}
void Ejercicioscombinados3(int matA[31][12],int matB[31][12],int matC[31][12],int matD[31][12],int matE[31][12])
{
    /**Podia hacer mucho mas facil pero lo queria hacer asi**/
    int dia,mes;
    char codigovendedor;
    float importe;
    cout<<endl;
    cout<<"**********************************************"<<endl;
    cout<<" Ingrese el dia ( 1 a 31 ): ";
    cin>>dia;
    while(dia!=0)
    {
        cout<<" Ingrese el mes ( 1 a 12 ): ";
        cin>>mes;
        cout<<" Ingrese el importe : $";
        cin>>importe;
        cout<<" Ingrese el codigo del vendedor ( a,b,c,d,e) : ";
        cin>>codigovendedor;
        switch(codigovendedor)
        {
        case 'A':
        case 'a':
            {
               matA[dia-1][mes-1] += importe;

            }break;
        case 'b':
        case 'B':
            {
                matB[dia-1][mes-1] += importe;

            }break;
        case 'C':
        case 'c':
            {
                matC[dia-1][mes-1] += importe;

            }break;
        case 'D':
        case 'd':
            {
                matD[dia-1][mes-1] += importe;

            }break;
        case 'E':
        case 'e':
            {
                matE[dia-1][mes-1] += importe;

            }break;
        }
        cout<<endl;
        cout<<"**********************************************"<<endl;
        cout<<" Ingrese el dia ( 1 a 31 ): ";
        cin>>dia;

    }
}
void PuntoAcombi3(int matA[31][12],int matB[31][12],int matC[31][12],int matD[31][12],int matE[31][12])
{
    cout<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"             VENDEDOR A                  "<<endl;
    for(int x1=0;x1<31;x1++)
    {
       for(int y1=0;y1<12;y1++)
       {
           if(matA[x1][y1]!=0)
           {
             cout<<"EL DIA "<<x1+1<<" - "<<" MES "<<y1+1<<" - VENDIO ---> $"<<matA[x1][y1]<<endl;
           }
       }
    }
    cout<<"*****************************************"<<endl;
    cout<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"             VENDEDOR B                  "<<endl;
    for(int x2=0;x2<31;x2++)
    {
       for(int y2=0;y2<12;y2++)
       {
           if(matB[x2][y2]!=0)
           {
             cout<<"EL DIA "<<x2+1<<" - "<<" MES "<<y2+1<<" - VENDIO ---> $"<<matB[x2][y2]<<endl;
           }
       }
    }
    cout<<"*****************************************"<<endl;
    cout<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"             VENDEDOR C                  "<<endl;
    for(int x3=0;x3<31;x3++)
    {
       for(int y3=0;y3<12;y3++)
       {
           if(matC[x3][y3]!=0)
           {
             cout<<"EL DIA "<<x3+1<<" - "<<" MES "<<y3+1<<" - VENDIO ---> $"<<matC[x3][y3]<<endl;
           }
       }
    }
    cout<<"*****************************************"<<endl;
    cout<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"             VENDEDOR D                  "<<endl;

    for(int x4=0;x4<31;x4++)
    {
       for(int y4=0;y4<12;y4++)
       {
           if(matD[x4][y4]!=0)
           {
             cout<<"EL DIA "<<x4+1<<" - "<<" MES "<<y4+1<<" - VENDIO ---> $"<<matD[x4][y4]<<endl;
           }
       }
    }
    cout<<"*****************************************"<<endl;
    cout<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"             VENDEDOR E                  "<<endl;
    for(int x5=0;x5<31;x5++)
    {
       for(int y5=0;y5<12;y5++)
       {
           if(matA[x5][y5]!=0)
           {
             cout<<"EL DIA "<<x5+1<<" - "<<" MES "<<y5+1<<" - VENDIO ---> $"<<matE[x5][y5]<<endl;
           }
       }
    }
     cout<<"*****************************************"<<endl;
}
void Ejercicioscombinados4(int *tipoengranaje,int tam1,int *maquinamenor,int tam2)
{
    int dia,tipo_de_engranaje,numeromaquina,cantidadproducida;
    cout<<endl;
    cout<<"*******************************************"<<endl;
    cout<<" Ingrese el dia: ";
    cin>>dia;
    while(dia!=32)
    {
        cout<<" Ingrese el tipo de engranaje ( 1 a 70 ): ";
        cin>>tipo_de_engranaje;
        cout<<" Ingrese en numero de la maquina utilizada: ";
        cin>>numeromaquina;
        cout<<" Cantidad producida: ";
        cin>>cantidadproducida;
        tipoengranaje[tipoengranaje-1] += cantidadproducida;
        maquinamenor[numeromaquina-1] += cantidadproducida;
        cout<<"**********************************************"<<endl;
        cout<<endl;
        cout<<" Ingrese el dia: ";
        cin>>dia;
    }
}
void PuntoAcombi4(int *tipoengranaje,int tam1)
{
    int bandera1 = 0;
    int maximoengranaje,tipo;
    for(int x=0;x<tam1;x++)
    {
        if(bandera1 == 0 || tipoengranaje[x]>maximoengranaje)
        {
            maximoengranaje = tipoengranaje[x];
            bandera = 1;
            tipo = x+1;
        }
    }
    cout<<"*********************************************************************************************************"<<endl;
    cout<<"                                          PUNTO A                                                        "<<endl;
    cout<<"*********************************************************************************************************"<<endl;
    cout<<" El tipo de engranaje "<<tipo<<" fue el que produjo la mayor cantidad con "<<maximoengranaje<<" unidades "<<endl;
    cout<<"*********************************************************************************************************"<<endl;
    cout<<endl;
}
void PuntoBcombi4(int *maquinamenor,int tam2)
{
    int bandera = 0;
    int minimocant,numeromaquina;
    for(int x=0;x<tam2;x++)
    {
        if(bandera == 0 || maquinamenor[x]<minimacant)
        {
            bandera = 1;
            minimacant = maquinamenor[x];
            numeromaquina = x+1;
        }
    }
    cout<<"*****************************************************************************************"<<endl;
    cout<<"                                         PUNTO B                                         "<<endl;
    cout<<"*****************************************************************************************"<<endl;
    cout<<" El numero de maquina "<<numeromaquina<<" la minima cantidad que produjo es: "<<minimocant<<endl;
    cout<<"*****************************************************************************************"<<endl;
}


#endif // FUNCIONREPASO2_H_INCLUDED
