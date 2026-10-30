#include <stdio.h>

int main()
{
    int x, mayor = 0, segundo = 0;

    printf("Entero positivo (0 termina): ");
    scanf("%d", &x);

    while (x != 0)
    {
        if (x > mayor)
        {
            segundo = mayor;
            mayor = x;
        }
        else if (x > segundo && x < mayor)
        {
            segundo = x;
        }

        printf("Otro entero positivo (0 termina): ");
        scanf("%d", &x);
    }

    if (segundo == 0)
        printf("Se necesitan al menos dos valores distintos\n");
    else
        printf("Mayor = %d, segundo mayor = %d\n", mayor, segundo);

    return 0;
}
