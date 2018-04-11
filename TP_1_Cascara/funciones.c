float suma(float n1, float n2)
{
float resultado;
resultado = n1 + n2;
return resultado;
}

float resta(float n1, float n2)
{
float resultado;
resultado = n1 - n2;
return resultado;
}

float multiplicacion(float n1, float n2)
{
float resultado;
resultado = n1 * n2;
return resultado;
}

float division(float n1, float n2)
{
float resultado;
resultado = n1 / n2;
return resultado;
}

int factorial(int n1)
{
    int factorial =1;
    int contador;
    for(contador = 1; contador <= n1; contador++)
        {
        factorial = factorial * contador;
        }
    return factorial;
}

