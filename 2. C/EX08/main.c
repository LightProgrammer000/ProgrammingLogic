#include <stdio.h>

int main (int argc, char *argv[])
{
    int dist;
    double comGas, conMed;

    // Solicita a distância percorrida
    printf("# Distancia percorrida: ");
    scanf("%d", &dist);

    // Solicita o combustível gasto
    printf("# Combustivel gasto: ");
    scanf("%lf", &comGas);

    // Calcula o consumo médio
    conMed = dist / comGas;

    // Exibe o consumo médio com três casas decimais
    printf("\n# Consumo medio = %.3lf\n", conMed);

    return 0;
}
