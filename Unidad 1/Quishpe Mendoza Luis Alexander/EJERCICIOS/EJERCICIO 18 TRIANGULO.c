#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Ingrese el numero de filas (n >= 1): ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("n debe ser mayor o igual que 1\n");
    }
    else
    {
        for (i = 1; i <= n; i++)         /* filas */
        {
            for (j = 1; j <= i; j++)     /* asteriscos de la fila */
            {
                printf("*");
            }
            printf("\n");                /* salto de linea */
        }
    }
}
