#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;

    // Vector (arreglo) con los nombres de los meses en orden (constante por seguridad)
    const char *meses[] = {
        "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    do {
        // Limpiar pantalla directamente sin usar función externa
        system("cls");

        printf("MENU\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Opcion no valida\n");
            while (getchar() != '\n'); // Limpiar buffer

            // Pausa directamente inline
            printf("\nPresione una tecla para continuar...");
            getchar();
            continue;
        }

        switch (opcion) {
            case 1: {
                int anio = 0, mes = 0, dia = 0;
                int maxDias = 31;

                // Solicitar año con validación de rango y mensaje de error
                do {
                    printf("Ingrese anio (1900-2015): ");
                    scanf("%d", &anio);
                    if (anio < 1900 || anio > 2015) {
                        printf("Error: anio no permitido. Debe ser entre 1900 y 2015.\n");
                    }
                } while (anio < 1900 || anio > 2015);

                // Solicitar mes (1 a 12)
                do {
                    printf("Ingrese mes (1-12): ");
                    scanf("%d", &mes);
                } while (mes < 1 || mes > 12);

                // Determinar días máximos según el mes seleccionado
                if (mes == 2) {
                    maxDias = 29; // Admite el día 29 de febrero
                } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    maxDias = 30;
                } else {
                    maxDias = 31;
                }

                // Solicitar día válido según el mes
                do {
                    printf("Ingrese dia (1-%d): ", maxDias);
                    scanf("%d", &dia);
                } while (dia < 1 || dia > maxDias);

                // Mostrar la fecha formateada usando el vector de meses
                printf("\nFecha ingresada: %d de %s de %d\n", dia, meses[mes], anio);

                // Pausa directamente inline
                printf("\nPresione una tecla para continuar...");
                getchar();
                getchar();
                break;
            }
            case 2:
                printf("\nEn proceso\n");

                // Pausa directamente inline
                printf("\nPresione una tecla para continuar...");
                getchar();
                getchar();
                break;
            case 3:
                printf("\nEn proceso\n");

                // Pausa directamente inline
                printf("\nPresione una tecla para continuar...");
                getchar();
                getchar();
                break;
            case 4:
                // Mostrar mensaje de salida
                printf("Salir...\n");
                break;
            default:
                // Informar opción no válida
                printf("Opcion no valida\n");

                // Pausa directamente inline
                printf("\nPresione una tecla para continuar...");
                getchar();
                getchar();
                break;
        }
    } while (opcion != 4);

    return 0;
}
