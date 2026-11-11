#include <stdio.h>
int main()
{
    int i, j, k, n;

    do
    {
        printf("Lineas del triangulo: ");
        scanf("%d", &n);
    } while (n <= 0);

    for(i = 1; i <= n; i++) // Filas
    {
        for(k = 1; k <= n - i; k++) //bucle espacio en blanco
        {
            printf(" ");
        }


        for(j = 1; j <= i; j++)//bucle para asteriscos
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
