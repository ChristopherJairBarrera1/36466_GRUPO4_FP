#include <stdio.h>

int main()
{
    int n, i, factorial;

    printf("Ingrese un entero entre 0 y 12: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("El factorial no esta definido para negativos\n");
    }
    else if (n > 12)
    {
        printf("Con int solo se puede calcular hasta 12!\n");
    }
    else
    {
        factorial = 1;
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("%d! = %d\n", n, factorial);
    }
    return 0;
}
