#include <stdio.h>

int main()
{
    const int secreto = 60;
    int intento, intentos = 0;

    do
    {
        printf("Adivina el numero (entre 1 y 100): ");
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto)
            printf("mas alto\n");
        else if (intento > secreto)
            printf("mas bajo\n");
        else
            printf("acertaste!\n");
    }
    while (intento != secreto);

    printf("Intentos usados: %d\n", intentos);
}
