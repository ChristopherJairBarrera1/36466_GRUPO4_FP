// Menu de vectores y matrices grupo numero 4
// Christopher Barrera; Alexander Quishpe; Sara Escalona]; Erick Gualotuña
#include <stdio.h>

int main() {
    int opcion;

    do
    {

        printf("        MENU PRINCIPAL VECTORES Y MATRICES       \n");
        printf("1.- Vector de enteros (datos quemados)\n");
        printf("2.- Matriz de flotantes (datos quemados)\n");
        printf("3.- Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                int cantidad;
                // los datos quemados (enteros) para llenar lo que pida el usuario
                int datos_quemados[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
                int max_pool = 12;
                //tamaño maximo del vector


                do {
                    printf("\nIngrese la cantidad de elementos para el vector (mayor a 0): ");
                    scanf("%d", &cantidad);
                    if (cantidad <= 0) {
                        printf("Error: La cantidad no puede ser 0 ni negativa. Intente de nuevo.\n");
                    }
                } while (cantidad <= 0);

                int vector[cantidad];

                // Llenado con los datos quemados (usa módulo % por si pide más de 10)
                for (int i = 0; i < cantidad; i++) {
                    vector[i] = datos_quemados[i % max_pool];
                }

                // Mostrar el vector resultante
                printf("\nVector generado:\n[ ");
                for (int i = 0; i < cantidad; i++) {
                    printf("%d ", vector[i]);
                }
                printf("]\n");
                break;
            }

            case 2: {
                int filas, columnas;
                float valor_base = 1; // Dato base quemado para generar flotantes

                // Validación de filas
                do {
                    printf("\nIngrese el numero de filas (mayor a 0): ");
                    scanf("%d", &filas);
                    if (filas <= 0) {
                        printf("Error: Las filas no pueden ser 0 ni negativas.\n");
                    }
                } while (filas <= 0);

                // Validación de columnas
                do {
                    printf("Ingrese el numero de columnas (mayor a 0): ");
                    scanf("%d", &columnas);
                    if (columnas <= 0) {
                        printf("Error: Las columnas no pueden ser 0 ni negativas.\n");
                    }
                } while (columnas <= 0);

                float matriz[filas][columnas];

                // Llenado con datos flotantes quemados/calculados automáticamente
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        matriz[i][j] = valor_base;
                        valor_base += 1; // Incrementa el valor quemado para variar los datos
                    }
                }

                // Mostrar la matriz resultante
                printf("\nMatriz generada (%dx%d):\n", filas, columnas);
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        printf("%.2f\t", matriz[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3:
                printf("\nSaliendo del programa... ¡Hasta luego!\n");
                break;

            default:
                printf("\nOpcion no valida. Por favor elija entre 1 y 3.\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}
