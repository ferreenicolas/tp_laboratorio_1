#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;

    ePersona personas[20];

    inicializarPersonas(personas, 20);



    while(seguir=='s')
    {
        printf("1- Agregar persona.\n");
        printf("2- Borrar persona.\n");
        printf("3- Imprimir lista ordenada por  nombre.\n");
        printf("4- Imprimir grafico de edades.\n\n");
        printf("5- Salir.\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(personas, 20);
                break;
            case 2:
                borrarPersona(personas, 20);
                break;
            case 3:
                listarNombresOrdenados(personas ,20);
                break;
            case 4:
                graficoEdades(personas, 20);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
