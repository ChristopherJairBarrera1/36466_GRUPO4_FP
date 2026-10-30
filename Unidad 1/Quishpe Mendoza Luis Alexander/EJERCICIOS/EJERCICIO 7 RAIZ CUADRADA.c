#include <stdio.h>

int main()
{
    int N, i;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("El numero debe ser positivo\n");
    }
    else
    {
        i = 1;
        while (i * i <= N)
        {
            i++;
        }
        printf("La raiz cuadrada entera de %d es %d\n", N, i - 1);
    }
    return 0;
}
