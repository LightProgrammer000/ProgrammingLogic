#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declaração da variável para quantidade de elementos
    int qtd;

    // Solicita a quantidade de valores para cada vetor
    printf("# Quantos valores vai ter cada vetor: ");
    scanf("%d", &qtd);
    putchar('\n');

    // Declaração dos vetores A, B e C
    double vetA[qtd], vetB[qtd], vetC[qtd];

    // Solicita os valores do vetor A
    printf("# Digite os valores do vetor A:\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("# Valor [%d]: ", i+1);
        scanf("%lf", &vetA[i]);
    }

    // Solicita os valores do vetor B
    printf("\n# Digite os valores do vetor B:\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("# Valor [%d]: ", i+1);
        scanf("%lf", &vetB[i]);
    }

    // Calcula e exibe o vetor resultante da soma de A e B
    printf("\n# VETOR RESULTANTE: ");
    for (int i = 0; i < qtd; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
        printf("\n-> %.2lf", vetC[i]);
    }

    putchar('\n');
    return 0;
}
