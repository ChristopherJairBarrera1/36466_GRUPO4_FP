#include <stdio.h>

int main()
{
    double x, valorAbs, resultado;

    printf("Ingrese un numero: ");
    scanf("%lf", &x);

    if (x < 0)
        valorAbs = -x;
    else
        valorAbs = x;

    resultado = valorAbs * valorAbs * valorAbs;

    printf("El valor de |x|^3 es: %.2f\n", resultado);
    return 0;
}
