#include <stdio.h>

int main()
{
    int n, binario, potencia;
    printf("Ingrese un entero entre 1 y 1023: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("El numero debe ser positivo\n");
    }
    else if (n > 1023)
    {
        printf("Con int solo se puede convertir hasta 1023\n");
    }
    else
    {
        binario = 0;
        potencia = 1;

        while (n > 0)
        {
            binario = binario + (n % 2) * potencia;
            n = n / 2;
            if (n > 0)
                potencia = potencia * 10;
        }
        printf("La representacion binaria es: %d\n", binario);
    }

}
