#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>



void inicializarPersonas(ePersona pers[] , int tam)
{
    int i;

    for(i=0 ; i < tam ; i++)
    {
        pers[i].estado = 0;
    }
}

int obtenerEspacioLibre(ePersona pers[], int tam)
{
    int i;
    int indiceVacio = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(pers[i].estado == 0)
        {
            indiceVacio = i;
            break;
        }
    }

    return indiceVacio;
}
int buscarPorDni(ePersona pers[],int tam, int dni)
{
    int i;
    int indiceDni = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(dni == pers[i].dni && pers[i].estado == 1)
        {
            indiceDni = i;
            break;
        }
    }

    return indiceDni;

}

void mostrarPersona(ePersona pers)
{
    printf("DNI: %d\nNombre: %s\nEdad: %d\n", pers.dni, pers.nombre, pers.edad);
}

void agregarPersona(ePersona pers[], int tam)
{
    ePersona nuevaPersona;

    int indice;
    int dniEsta;
    int dni;

    system("cls");
    printf("---Agregar persona---\n");

    indice = obtenerEspacioLibre(pers, tam);

    if(indice == -1)
    {
        printf("\n¡SISTEMA COMPLETO!\n");
        system("pause");
    }
    else
    {
        printf("Ingrese dni: ");
        scanf("%d", &dni);

        dniEsta = buscarPorDni(pers, tam, dni);

        if(dniEsta != -1)
        {
            system("cls");
            printf("\nEl dni %d ya esta dado de alta en el sistema\n", dni);
                   mostrarPersona(pers[dniEsta]);
                   system("pause");
                   system("cls");

        }
        else{
                   nuevaPersona.estado = 1;
                   nuevaPersona.dni = dni;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevaPersona.nombre);

                   printf("Ingrese edad: ");
                   scanf("%d", &nuevaPersona.edad);

                   pers[indice] = nuevaPersona;

                   system("cls");

        }

    }
}

void borrarPersona(ePersona pers[], int tam)
{
int dni;
int dniEsta;
char confirmacion;

system("cls");
printf("---Borrar Persona---\n");

   printf("Ingrese dni: ");
        scanf("%d", &dni);

        dniEsta = buscarPorDni(pers, tam, dni);

        if(dniEsta == -1)
        {
            printf("\nEl dni %d no existe en el sistema\n", dni);
            system("pause");
            system("cls");

        }
        else{

                mostrarPersona(pers[dniEsta]);
                system("pause");


        do{
            printf("\nConfirma baja? |s|n|: ");
            fflush(stdin);
            scanf("%c", &confirmacion);
            confirmacion = tolower(confirmacion);
        }while(confirmacion != 's' && confirmacion != 'n');

        if(confirmacion == 's'){
            pers[dniEsta].estado = 0;
            printf("\nSe ha realizado la baja\n");
            system("pause");
            system("cls");
        }
        else{
            printf("\nSe ha cancelado la baja\n");
            system("pause");
            system("cls");
        }

        }
}

void listarNombresOrdenados(ePersona pers[], int tam)
{
    int i,j;
    ePersona auxiliar;



        for(i=0;i< 20-1;i++)
        {
        for(j=i+1 ;j<20 ;j++)
            {
           if(pers[i].estado != 0)
                {
                  if(strcmp(pers[i].nombre, pers[j].nombre)>0)
                    {
                        auxiliar = pers[i];
                        pers[i] = pers[j];
                        pers[j] = auxiliar;
                    }
                }

            }
        }

        printf("\nLista (ordenada alfabeticamente): \n");
                for(i=0;i<20;i++)
                {
                    if(pers[i].estado != 0){
                       printf("\nNombre: %s \tDNI: %d \tEdad: %d\t\n", pers[i].nombre, pers[i].dni, pers[i].edad);

                    }

                }
                system("pause");
                system("cls");
}

void graficoEdades(ePersona pers[], int tam)
{
    //<19 19 a 35 >35

    int i;
    int contador18 = 0;
    int contador35 = 0;
    int contador36 = 0;
    int flag= 0;
    int mayorEdad;



    for(i=0;i < 20; i++)
        {
            if(pers[i].estado == 1)
                {
                    if(pers[i].edad < 19)
                    {
                        contador18++;
                    }else{
                        if(pers[i].edad>18 && pers[i].edad<35)
                        {
                            contador35++;
                        }else
                        {
                            contador36++;
                        }
                        }
                }
        }




        if(contador18 >= contador35 && contador18 >= contador36)
            {
                mayorEdad = contador18;
            }
        else
            {
                if(contador35 >= contador18 && contador35 >= contador36)
                {
                    mayorEdad = contador35;
                }
                else
                {
                    mayorEdad = contador36;
                }
            }

        printf("Menores a 18\tEntre 19 y 35\tMayores a 35\n\n");
        printf("%d\t%d\t%d\n\n", contador18, contador35, contador36);

        for(i=mayorEdad; i>0; i--)
            {
            if(i<= contador18)
            {
                printf("*");
            }
            if(i<= contador35)
            {
                flag=1;
                printf("\t*");
            }
            if(i<= contador36)
            {
            if(flag==0)
                printf("\t\t*");

            if(flag==1)
                printf("\t*");

            }

        printf("\n");
    }


    system("pause");
    system("cls");




}
