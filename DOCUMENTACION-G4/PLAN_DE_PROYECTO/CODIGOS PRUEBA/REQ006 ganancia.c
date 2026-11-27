#include <stdio.h>

/* REQ006: Calcular la ganancia total del dia
   Ganancia = venta total - gastos a proveedores */
int main()
{
    float ventaTotal, gastosTotal, ganancia;

    printf("CALCULO DE LA GANANCIA DEL DIA\n\n");

    printf("Ingrese la venta total del dia: $");

    if (scanf("%f", &ventaTotal) != 1 || ventaTotal < 0)
    {
        printf("Error: debe ingresar un valor valido.\n");
        return 0;
    }

    printf("Ingrese el total de gastos a proveedores: $");

    if (scanf("%f", &gastosTotal) != 1 || gastosTotal < 0)
    {
        printf("Error: debe ingresar un valor valido.\n");
        return 0;
    }

    ganancia = ventaTotal - gastosTotal;

    printf("\nVenta total:  $%.2f\n", ventaTotal);
    printf("Gastos:       $%.2f\n", gastosTotal);
    printf("GANANCIA TOTAL DEL DIA: $%.2f\n", ganancia);

    if (ganancia < 0)
    {
        printf("Atencion: los gastos superan a la venta (perdida).\n");
    }

    return 0;
}
