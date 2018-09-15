#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 3

void ordenarAlumno(int legajo[],int pp[],int sp[],char sexos[],char nombres[][20],float promedios[],int tam);

int main()
{
    int legajos[TAM];
    int pp[TAM];
    int sp[TAM];
    float promedios[TAM];
    char sexos[TAM];
    char nombres[TAM][20];
    int autoleg=0;//auto incremental

    for(int i=0; i<TAM; i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);*/
        legajos[i]=autoleg;
        autoleg++;

        printf("ingrese primer parcial: ");
        scanf("%d",&pp[i]);

        printf("ingrese segundo parcial: ");
        scanf("%d",&sp[i]);

        printf("ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&sexos[i]);

        printf("ingrese nombres: ");
        fflush(stdin);
        gets(nombres[i]);

        promedios[i]=(float)(pp[i]+sp[i])/2;

    }
    ordenarAlumno(legajos,pp,sp,sexos,nombres,promedios,TAM);

    for(int i=0; i<TAM; i++)
    {
        printf("\n");
        printf("legajo %d\n",legajos[i]);
        printf("pp %d\n",pp[i]);
        printf("sp %d\n",sp[i]);
        printf("sexo %c\n",sexos[i]);
        printf("nombre %s\n",nombres[i]);
        printf("promedio %.2f\n",promedios[i]);
    }


    return 0;
}


void ordenarAlumno(int legajo[],int pp[],int sp[],char sexos[],char nombres[][20],float promedios[],int tam)
{
    int auxleg,auxpp,auxsp;
    char auxsex,auxNomb[20];
    float auxProm;

    for(int i=0; i<tam-1;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(promedios[i]<promedios[j])
            {
                auxleg=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=auxleg;

                auxpp=pp[i];
                pp[i]=pp[j];
                pp[j]=auxpp;

                auxsp=sp[i];
                sp[i]=sp[j];
                sp[j]=auxsp;


                auxsex=sexos[i];
                sexos[i]=sexos[j];
                sexos[j]=auxsex;


                strcpy(auxNomb,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxNomb);

                auxProm=promedios[i];
                promedios[i]=promedios[j];
                promedios[j]=auxProm;

            }
        }
    }

}


//if(sexos[i]<sexos[j])
//else if(sexos[i]==sexos[j]  && strcmp(nombres[i],nombres[j])>0)
