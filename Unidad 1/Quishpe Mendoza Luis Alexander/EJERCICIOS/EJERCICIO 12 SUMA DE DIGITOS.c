#include <stdio.h>
int main()
{
    int n, suma;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("El numero debe ser positivo\n");
    }
    else
    {
        suma = 0;
        while (n > 0)
        {
            suma = suma + (n % 10);
            n = n / 10;
        }
        printf("La suma de los digitos es: %d\n", suma);
    }

}
