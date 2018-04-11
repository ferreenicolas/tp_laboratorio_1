#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float resultado;


    while(seguir =='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando (A=x): \n");
                scanf("%f", &numeroUno);
                break;
            case 2:
                 printf("Ingresar 2do operando (B=y)\n");
                 scanf("%f", &numeroDos);
                break;
            case 3:
                resultado = suma(numeroUno, numeroDos);
                printf("La suma es: %.f \n", resultado);
                system("pause");
                break;
            case 4:
                resultado = resta(numeroUno, numeroDos);
                printf("La resta es: %.f \n", resultado);
                system("pause");
                break;
            case 5:
                resultado = division(numeroUno, numeroDos);
                printf("La division es: %.2f \n", resultado);
                system("pause");
                break;
            case 6:
                resultado = multiplicacion(numeroUno, numeroDos);
                printf("La multiplicacion es: %.f \n", resultado);
                system("pause");
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

  }
   return 0;
}
