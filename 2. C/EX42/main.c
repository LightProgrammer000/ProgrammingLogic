#include <stdio.h>

int main (int argc , char *argv[])
{
    // N�mero de entradas
    int n;

    // Solicita o n�mero de entradas (m�ximo 10)
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &n);

    // Limita o n�mero de entradas a 10
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

    // Entrada dos n�meros
    for (int i = 0; i < tamanho; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    // Exibe n�meros negativos
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
