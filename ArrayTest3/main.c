#include <stdio.h>
#include <stdlib.h>
#define tam 5

void mostrarVector(int x[],int index);
int indexVector(int x[],int value,int numero);
int indexMayor(int x[],int value,int numero);

int main()
{
    int encontrado;
    int vec[tam]={45,75,65,32,21};

    encontrado=indexVector(vec,tam,45);

    if(encontrado!=-1)
    {
        printf("el vector fue encontrado");
    }else
    {
        printf("no fue encontrado.\n");
    }

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


int indexVector(int x[],int value,int numero)
{
    int i;
    int encontrar=-1;

    for(i=0;i<value;i++)
    {
        if(x[i]==numero)
        {
          encontrar=i;
          break;
        }
    }
    return encontrar;
}
