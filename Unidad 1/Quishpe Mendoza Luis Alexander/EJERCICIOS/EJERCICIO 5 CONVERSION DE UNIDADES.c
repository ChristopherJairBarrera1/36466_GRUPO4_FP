#include <stdio.h>

int main()
{
    int c, dias, horas, minutos, segundos;

    printf("Ingrese la duracion en segundos: ");
    scanf("%d", &c);

    if (c < 0)
    {
        printf("La duracion no puede ser negativa\n");
    }
    else
    {
        /* en C, entero / entero ya corta los decimales */
        dias     = c / (24 * 60 * 60);
        horas    = (c % (24 * 60 * 60)) / (60 * 60);
        minutos  = (c % (60 * 60)) / 60;
        segundos = c % 60;

        printf("%d segundos equivalen a %d dias, %d horas, %d minutos y %d segundos\n",
               c, dias, horas, minutos, segundos);
    }
}
