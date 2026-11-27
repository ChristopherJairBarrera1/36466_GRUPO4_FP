#include <stdio.h>

/* REQ005: Registrar los gastos del negocio (pagos a proveedores) */
int main()
{
    int opcion;
    float gasto;
    float gastosTotal = 0;

    do
    {
        printf("\nMENU DE GASTOS\n");
        printf("1. Registrar gasto a proveedor\n");
        printf("2. Ver total de gastos\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1)
        {
            printf("Error: debe ingresar un numero.\n");
            return 0;
        }

        switch (opcion)
        {
            case 1:
                printf("Ingrese el valor del gasto: $");

                if (scanf("%f", &gasto) != 1)
                {
                    printf("Error: debe ingresar un numero.\n");
                    return 0;
                }

                if (gasto <= 0)
                {
                    printf("Error: el gasto debe ser mayor a cero.\n");
                }
                else
                {
                    gastosTotal += gasto;
                    printf("Gasto registrado correctamente.\n");
                }
                break;

            case 2:
                printf("Total de gastos: $%.2f\n", gastosTotal);
                break;

            case 0:
                printf("Saliendo del menu de gastos.\n");
                break;

            default:
                printf("Error: opcion no valida.\n");
        }
    }
    while (opcion != 0);

    printf("\nTOTAL DE GASTOS DEL DIA: $%.2f\n", gastosTotal);

    return 0;
}
