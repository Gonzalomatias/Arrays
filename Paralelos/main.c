#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char auxCad[50];


    printf("ingrese su nombre: ");
    gets(auxCad);

    while(strlen(auxCad)>19)
    {
        printf("Error nombre demasiado largo.Reingrese nombre: ");
        gets(auxCad);
    }
    strcpy(nombre,auxCad);

    printf("Usted se llama %s\n\n",nombre);

    return 0;
}
