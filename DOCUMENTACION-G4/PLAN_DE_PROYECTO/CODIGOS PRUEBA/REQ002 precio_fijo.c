#include <stdio.h>

// REQ002: Manejar el precio individual fijo de cada producto */
int main()
{
    int codigo, i;

    char *productos[14] = {
        "Papas", "Galletas", "Gomitas", "Chicles",
        "Chupetes", "Chifles", "Doritos", "Cheetos",
        "Agua", "Refrescos", "Arroz", "Azucar",
        "Leche", "Aceite"
    };

    // Precio fijo de cada producto (mismo orden que los codigos 1 a 14)
    float precios[14] = {
        0.50, 0.35, 0.25, 0.10,
        0.15, 0.60, 0.75, 0.75,
        0.60, 1.00, 1.20, 1.10,
        1.00, 2.50
    };

    printf("LISTA DE PRODUCTOS Y PRECIOS\n");

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

    printf("Producto: %s\n", productos[codigo - 1]);
    printf("Precio individual: $%.2f\n", precios[codigo - 1]);

    return 0;
}
