#include <stdio.h>

int main()
{
    int x, y;

    printf("Primer numero: ");
    scanf("%d", &x);
    printf("Segundo numero: ");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("No es posible dividir entre cero\n");
    }
    else
    {
        if (x % y == 0)
            printf("%d es divisible por %d\n", x, y);
        else
            printf("%d no es divisible por %d\n", x, y);
    }
    return 0;
}
