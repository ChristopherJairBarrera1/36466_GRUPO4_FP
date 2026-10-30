#include <stdio.h>

int main()
{
    int a, b, resto;

    printf("Primer entero positivo: ");
    scanf("%d", &a);
    printf("Segundo entero positivo: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Ambos numeros deben ser positivos\n");
    }
    else
    {
        while (b != 0)
        {
            resto = a % b;
            a = b;
            b = resto;
        }
        printf("El maximo comun divisor es: %d\n", a);
    }
}
