#include <stdio.h>

/* REQ003: Calcular de forma automatica el subtotal de cada producto */
int main()
{
    int codigo, cantidad, i;
    float subtotal;

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

    printf("CALCULO DEL SUBTOTAL\n\n");

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
        return 0;
    }

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

    // Subtotal = cantidad * precio individual
    subtotal = cantidad * precios[codigo - 1];

    printf("\nProducto: %s\n", productos[codigo - 1]);
    printf("Cantidad: %d\n", cantidad);
    printf("Precio individual: $%.2f\n", precios[codigo - 1]);
    printf("Subtotal: $%.2f\n", subtotal);

    return 0;
}
