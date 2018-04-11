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
        system("cls");
        printf("1- Ingresar 1er operando (A=%.f)\n", numeroUno);
        printf("2- Ingresar 2do operando (B=%.f)\n", numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando (A=%.f): \n", numeroUno);
                scanf("%f", &numeroUno);
                break;
            case 2:
                 printf("Ingresar 2do operando (B=%.f)\n", numeroDos);
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
                if(factorial < 1)
                    {
                    printf("Error, ingrese otro numero.");
                    break;
                    }
                resultado = factorial(numeroUno);
                printf("El factorial es: %.f \n", resultado);
                system("pause");
                break;
            case 8:
                resultado = suma(numeroUno, numeroDos);
                printf("La suma es: %.f \n", resultado);

                resultado = resta(numeroUno, numeroDos);
                printf("La resta es: %.f \n", resultado);

                resultado = division(numeroUno, numeroDos);
                printf("La division es: %.2f \n", resultado);

                resultado = multiplicacion(numeroUno, numeroDos);
                printf("La multiplicacion es: %.f \n", resultado);

                if(factorial < 1)
                    {
                    printf("Error, ingrese otro numero.");
                    break;
                    }
                resultado = factorial(numeroUno);
                printf("El factorial es: %.f \n", resultado);
                system("pause");

                break;
            case 9:
                seguir = 'n';
                break;
        }

  }
   return 0;
}
