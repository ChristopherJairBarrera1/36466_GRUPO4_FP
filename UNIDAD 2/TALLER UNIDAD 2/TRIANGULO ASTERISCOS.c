//TALLER GRUPO 4
//11/11/2026
//TRIANGULO DE ASTERISCOS

#include <stdio.h>
int main()
{
    /*
        *
        * *
        * * *
        * * * *
    */
    int i, j, n;

    do
    {
        printf("Lineas del triangulo: ");
        scanf("%d", &n);
    } while (n <= 0);

for(i = 1; i <= n; i++) //filas
    {
        for(j = 1; j <= i; j++)   //intercambiamos j por i e iniciamos en 1 para posterior evaluar que j <= i e ir sumando los asteriscos
            printf("* ");

        printf("\n");
    }
    return 0;
}
