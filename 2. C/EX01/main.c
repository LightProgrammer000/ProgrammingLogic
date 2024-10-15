#include <stdio.h>

// Função principal
int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double lar, com, val, are, pre;

    // Entrada da largura do terreno
    printf("# Digite a largura do terreno: ");
    scanf("%lf", &lar);

    // Entrada do comprimento do terreno
    printf("# Digite o comprimento do terreno: ");
    scanf("%lf", &com);

    // Entrada do valor do metro quadrado
    printf("# Digite o valor do metro quadrado: ");
    scanf("%lf", &val);

    // Cálculo da área e do preço do terreno
    are = lar * com;
    pre = are * val;

    // Exibição dos resultados
    printf("\n# Area do terreno: %.2lf", are);
    printf("\n# Preco do terreno: %.2lf\n", pre);

    return 0;
}
