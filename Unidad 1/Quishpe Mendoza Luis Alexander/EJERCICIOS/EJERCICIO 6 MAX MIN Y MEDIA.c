#include <stdio.h>

int main()
{
    double altura, suma = 0, maximo, minimo, media;
    int cantidad = 0;

    printf("Altura (negativa para salir): ");
    scanf("%lf", &altura);

    if (altura >= 0)
    {
        maximo = altura;
        minimo = altura;

        while (altura >= 0)
        {
            suma = suma + altura;
            cantidad++;

            if (altura > maximo)
                maximo = altura;
            if (altura < minimo)
                minimo = altura;

            printf("Otra altura: ");
            scanf("%lf", &altura);
        }

        media = suma / cantidad;
        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
    }
    else
    {
        printf("No hay alturas validas\n");
    }

}
