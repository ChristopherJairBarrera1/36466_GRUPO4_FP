#include <stdio.h>

int main()
{
    int N, i, esPrimo;
    printf("Ingrese un entero mayor que 1: ");
    scanf("%d", &N);

    if (N <= 1)
    {
        printf("El numero debe ser mayor que 1\n");
    }
    else
    {
        esPrimo = 1;
        i = 2;

        while (i < N && esPrimo)
        {
            if (N % i == 0)
                esPrimo = 0;
            i++;
        }

        if (esPrimo)
            printf("%d es primo\n", N);
        else
            printf("%d no es primo\n", N);
    }

}
