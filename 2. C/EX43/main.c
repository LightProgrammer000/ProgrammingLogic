#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    double acuSom = 0;

    // Solicita o número de entradas
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &n);

    double vet[n]; // Declara o vetor com base no número de entradas
    putchar('\n');

    // Coleta os números e calcula a soma
    for (int i = 0; i < n; i++)
    {
        printf("# Digite um numero: ");
        scanf("%lf", &vet[i]);
        acuSom += vet[i];
    }

    // Exibe os valores digitados
    printf("\n# VALORES = ");
    for (int i = 0; i < n; i++)
    {
        printf("%.1lf  ", vet[i]);
    }

    // Exibe a soma e a média dos valores
    printf("\n# Soma = %.2lf", acuSom);
    printf("\n# Media = %.2lf\n", acuSom / n);

    return 0;
}
