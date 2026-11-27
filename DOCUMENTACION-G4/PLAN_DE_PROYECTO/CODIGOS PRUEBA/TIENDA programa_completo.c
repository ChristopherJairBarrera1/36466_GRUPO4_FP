#include <stdio.h>

int main()
{
    int opcion, codigo, cantidad, i;
    float gasto, subtotal;
    float ventaTotal = 0;     // REQ004
    float gastosTotal = 0;    // REQ005
    float ganancia;           // REQ006

    char *productos[14] = {
        "Papas", "Galletas", "Gomitas", "Chicles",
        "Chupetes", "Chifles", "Doritos", "Cheetos",
        "Agua", "Refrescos", "Arroz", "Azucar",
        "Leche", "Aceite"
    };

    // REQ002: precio fijo por producto (mismo orden que los codigos 1 a 14)
    float precios[14] = {
        0.50, 0.35, 0.25, 0.10,
        0.15, 0.60, 0.75, 0.75,
        0.60, 1.00, 1.20, 1.10,
        1.00, 2.50
    };

    // REQ001: cantidades vendidas por producto
    int vendidos[14] = {0};

    do
    {
        printf("\n===== TIENDA DE ABARROTES =====\n");
        printf("1. Registrar venta\n");
        printf("2. Registrar gasto a proveedor\n");
        printf("3. Ver resumen del dia\n");
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
                // ---------- REQ001: registrar producto y cantidad ----------
                printf("\nCODIGOS DE PRODUCTOS\n");

                for (i = 0; i < 14; i++)
                {
                    printf("%d. %s - $%.2f\n", i + 1, productos[i], precios[i]);
                }

                printf("\nIngrese el codigo del producto: ");

                if (scanf("%d", &codigo) != 1)
                {
                    printf("Error: debe ingresar un numero.\n");
                    return 0;
                }

                if (codigo < 1 || codigo > 14)
                {
                    printf("Error: el producto no existe.\n");
                    break;
                }

                printf("Producto seleccionado: %s\n", productos[codigo - 1]);
                printf("Ingrese la cantidad vendida: ");

                if (scanf("%d", &cantidad) != 1)
                {
                    printf("Error: debe ingresar un numero.\n");
                    return 0;
                }

                while (cantidad <= 0)
                {
                    printf("Error: la cantidad debe ser mayor a cero.\n");
                    printf("Ingrese nuevamente la cantidad: ");

                    if (scanf("%d", &cantidad) != 1)
                    {
                        printf("Error: debe ingresar un numero.\n");
                        return 0;
                    }
                }

                // ---------- REQ003: subtotal ----------
                subtotal = cantidad * precios[codigo - 1];

                // ---------- REQ004: acumular venta total ----------
                ventaTotal += subtotal;
                vendidos[codigo - 1] += cantidad;

                printf("Subtotal: $%.2f\n", subtotal);
                printf("Producto registrado correctamente.\n");
                break;

            case 2:
                // ---------- REQ005: registrar gasto ----------
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

            case 3:
                // ---------- Resumen del dia ----------
                printf("\nRESUMEN DEL DIA\n");

                for (i = 0; i < 14; i++)
                {
                    if (vendidos[i] > 0)
                    {
                        printf("%s: %d unidades\n", productos[i], vendidos[i]);
                    }
                }

                // ---------- REQ006: ganancia ----------
                ganancia = ventaTotal - gastosTotal;

                printf("\nVenta total:  $%.2f\n", ventaTotal);
                printf("Gastos:       $%.2f\n", gastosTotal);
                printf("GANANCIA TOTAL DEL DIA: $%.2f\n", ganancia);
                break;

            case 0:
                printf("Programa finalizado.\n");
                break;

            default:
                printf("Error: opcion no valida.\n");
        }
    }
    while (opcion != 0);

    return 0;
}
