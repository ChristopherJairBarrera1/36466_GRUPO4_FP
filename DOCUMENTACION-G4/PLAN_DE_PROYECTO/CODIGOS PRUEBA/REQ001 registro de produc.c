int main()
{
    int codigo, cantidad;
    int i;

    // Nombres de los productos
    char *productos[14] = {
        "Papas", "Galletas", "Gomitas", "Chicles",
        "Chupetes", "Chifles", "Doritos", "Cheetos",
        "Agua", "Refrescos", "Arroz", "Azucar",
        "Leche", "Aceite"
    };

    // Cantidades vendidas
    int vendidos[14] = {0};

    printf("REGISTRO DE PRODUCTOS VENDIDOS\n");

    while (1)
    {
        printf("\nCODIGOS DE PRODUCTOS\n");

        for (i = 0; i < 14; i++)
        {
            printf("%d. %s\n", i + 1, productos[i]);
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

        vendidos[codigo - 1] += cantidad;

        printf("Producto registrado correctamente.\n");
    }

    // Resumen de ventas
    printf("\nRESUMEN DEL DIA\n");

    for (i = 0; i < 14; i++)
    {
        printf("%s: %d unidades\n", productos[i], vendidos[i]);
    }

    printf("Registro finalizado.\n");

    return 0;
}
