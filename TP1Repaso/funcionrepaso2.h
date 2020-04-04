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


#endif // FUNCIONREPASO2_H_INCLUDED
