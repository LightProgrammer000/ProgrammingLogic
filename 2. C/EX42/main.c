#include <stdio.h>

int main (int argc , char *argv[])
{
    // Número de entradas
    int n;

    // Solicita o número de entradas (máximo 10)
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &n);

    // Limita o número de entradas a 10
    while (n > 10)
    {
        printf("\n# Maximo ate 10 numeros");
        printf("\n# Quantos numeros voce vai digitar: ");
        scanf("%d", &n);
    }

    // Vetor com tamanho baseado em n
    int vet[n];
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    putchar('\n');

    // Entrada dos números
    for (int i = 0; i < tamanho; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    // Exibe números negativos
    printf("\n# Numeros negativos: \n");

    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] < 0)
        {
            printf("* %d\n", vet[i]);
        }
    }

    return 0;
}
