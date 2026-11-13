#include <stdio.h>

// Funcion 1: Grafico Cuadrado Hueco
void cuadradoHueco(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Borde: primera y ultima fila, primera y ultima columna
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Funcion 2: Potencia sin usar pow()
int potencia(int base, int exp) {
    int i, resultado = 1;
    for (i = 1; i <= exp; i++) {
        resultado = resultado * base;
    }
    return resultado;
}

// Funcion 3: Serie y su suma
void seriePotencias(int n, int exp) {
    int i, valor, suma = 0;
    printf("Serie: ");
    for (i = 1; i <= n; i++) {
        valor = potencia(i, exp);
        printf("%d^%d=%d", i, exp, valor);
        suma = suma + valor;
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\nSuma total = %d\n", suma);
}

int main() {
    int opcion, n, exp;

    do {
        printf("\n===== MENU SWITCH =====\n");
        printf("1. Grafico Cuadrado Hueco\n");
        printf("2. Serie de numeros elevados al exponente y su suma\n");
        printf("3. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa el lado del cuadrado: ");
                scanf("%d", &n);
                cuadradoHueco(n);
                break;

            case 2:
                printf("Ingresa cuantos numeros de la serie: ");
                scanf("%d", &n);
                printf("Ingresa el exponente: ");
                scanf("%d", &exp);
                seriePotencias(n, exp);
                break;

            case 3:
                printf("Saliendo del programa... Gracias!\n");
                break;

            default:
                printf("Opcion no valida, intenta de nuevo\n");
        }

    } while (opcion != 3);

    return 0;
}
