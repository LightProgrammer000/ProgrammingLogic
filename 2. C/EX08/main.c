#include <stdio.h>

int main (int argc, char *argv[])
{
    int dist;
    double comGas, conMed;

    // Solicita a dist�ncia percorrida
    printf("# Distancia percorrida: ");
    scanf("%d", &dist);

    // Solicita o combust�vel gasto
    printf("# Combustivel gasto: ");
    scanf("%lf", &comGas);

    // Calcula o consumo m�dio
    conMed = dist / comGas;

    // Exibe o consumo m�dio com tr�s casas decimais
    printf("\n# Consumo medio = %.3lf\n", conMed);

    return 0;
}
