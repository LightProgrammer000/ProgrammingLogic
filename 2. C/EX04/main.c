#include <stdio.h>

// Função principal
int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int x, y, som;

    // Entrada do valor de 'x'
    printf("# Digite o valor de 'x': ");
    scanf("%d", &x);

    // Entrada do valor de 'y'
    printf("# Digite o valor de 'y': ");
    scanf("%d", &y);

    // Cálculo da soma
    som = x + y;

    // Exibição do resultado
    printf("\n# Soma = %d\n", som);

    return 0;
}
