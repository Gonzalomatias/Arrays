#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define tam 5

void mostrarVector(int x[],int indice);

int main()
{
    int vec[tam];
    char opcion;
    int aux,indice,i;

     for(i=0;i<tam;i++)
    {
        vec[i]=0;
    }

    do
    {


        printf("ingrese indice: ");
        scanf("%d",&indice);
        printf("ingrese numero: ");
        scanf("%d",&aux);

        vec[indice]= aux;

        printf("desea continuar s/n: ");
        scanf("%c",&opcion);
        //opcion=tolower(opcion);

    }while(opcion=='s'||opcion=='S');

    mostrarVector(vec,tam);

    return 0;
}

void mostrarVector(int x[],int index)
{
    int i;

    for(i=0; i<index; i++)
    {
        printf("%d\n",x[i]);

    }

}
