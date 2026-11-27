#include <stdio.h>

/* REQ004: Calcular y mostrar la venta total del dia */
int main()
{
    int codigo, cantidad, i;
    float ventaTotal = 0;

    char *productos[14] = {
        "Papas", "Galletas", "Gomitas", "Chicles",
        "Chupetes", "Chifles", "Doritos", "Cheetos",
        "Agua", "Refrescos", "Arroz", "Azucar",
        "Leche", "Aceite"
    };

    float precios[14] = {
        0.50, 0.35, 0.25, 0.10,
        0.15, 0.60, 0.75, 0.75,
        0.60, 1.00, 1.20, 1.10,
        1.00, 2.50
    };

    printf("REGISTRO DE VENTAS DEL DIA\n");

    while (1)
    {
        printf("\nCODIGOS DE PRODUCTOS\n");

        for (i = 0; i < 14; i++)
        {
            printf("%d. %s - $%.2f\n", i + 1, productos[i], precios[i]);
        }

        printf("0. Terminar\n");
        printf("\nIngrese el codigo del producto: ");

        if (scanf("%d", &codigo) != 1)
        {
            printf("Error: debe ingresar un numero.\n");
            break;
        }

        if (codigo == 0)
        {
            break;
        }

        if (codigo < 1 || codigo > 14)
        {
            printf("Error: el producto no existe.\n");
            continue;
        }

        printf("Producto seleccionado: %s\n", productos[codigo - 1]);
        printf("Ingrese la cantidad vendida: ");

        if (scanf("%d", &cantidad) != 1)
        {
            printf("Error: debe ingresar un numero.\n");
            break;
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

        // Se suma el subtotal de este producto a la venta total
        ventaTotal += cantidad * precios[codigo - 1];

        printf("Subtotal: $%.2f\n", cantidad * precios[codigo - 1]);
        printf("Producto registrado correctamente.\n");
    }

    printf("\nVENTA TOTAL DEL DIA: $%.2f\n", ventaTotal);

    return 0;
}
