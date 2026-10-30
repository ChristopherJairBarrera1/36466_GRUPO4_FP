#include <stdio.h>

/* Modulo: devuelve 1 si num es primo y 0 si no lo es */
int Es_primo(int num)
{
    int primo, d;

    if (num <= 1)
    {
        primo = 0;
    }
    else
    {
        primo = 1;
        for (d = 2; d * d <= num; d++)   /* basta llegar a la raiz de num */
        {
            if (num % d == 0)
                primo = 0;
        }
    }
    return primo;
}

int main()
{
    int inicio, fin_rango, p;

    printf("Inicio del rango: ");
    scanf("%d", &inicio);
    printf("Fin del rango: ");
    scanf("%d", &fin_rango);

    if (inicio > fin_rango)
    {
        printf("Error\n");
    }
    else
    {
        printf("Primos del rango: ");
        for (p = inicio; p <= fin_rango; p++)
        {
            if (Es_primo(p))
                printf("%d ", p);
        }
        printf("\n");
    }
    return 0;
}
