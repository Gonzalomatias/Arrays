#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
  int vec[tam];
  int i;
  //int aux=0;

    for(i=0;i<tam;i++)
    {
        printf("ingrese numero: ");
        scanf("%d",&vec[i]);

    }
    printf("\nlos numeros ingresados son: %d\n\n",vec[i]);

    for(i=0;i<tam;i++)
    {
        printf("numeros: %d ",vec[i]);

    }
    printf("\n\n");

    return 0;
}
