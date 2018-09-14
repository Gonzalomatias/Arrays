#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mostrarCharArray(char vec[],int tam);
void ordenarCharArray(char vec[],int tam,int criterio);
int main()
{
    char nombre[20];
    printf("Ingrese nombre: ");;
    fgets(nombre,20,stdin);


    puts(nombre);

    printf("cantidad : %d",strlen(nombre));





    return 0;
}


void ordenarCharArray(char vec[],int tam,int criterio)
{
    char aux;
    int i,j;

    for(i=0;i<tam -1; i++)
    {
     for(j=i+1; j<tam;j++)
     {
         if(vec[i]>vec[j] && criterio ==1)
         {
             aux=vec[i];
             vec[i]=vec[j];
             vec[j]=aux;

         }
     }

    }

}

void mostrarCharArray(char vec[],int tam)
{
    int i;
    for(i=0; i<tam;i++)
        printf("%c",vec[i]);


     printf("\n\n");

}
