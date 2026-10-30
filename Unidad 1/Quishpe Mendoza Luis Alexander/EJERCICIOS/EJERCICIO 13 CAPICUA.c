#include <stdio.h>
int main()
{
    int n, copia, invertido;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("El numero debe ser positivo\n");
    }
    else
    {
        copia = n;
        invertido = 0;

        while (copia > 0)
        {
            invertido = invertido * 10 + (copia % 10);
            copia = copia / 10;
        }

        if (invertido == n)
            printf("%d es capicua\n", n);
        else
            printf("%d no es capicua\n", n);
    }

}
