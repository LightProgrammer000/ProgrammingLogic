#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int qtd, qtdPar = 0, acuSom = 0;

    // Solicita a quantidade de elementos do vetor
    printf("# Quantos elementos vai ter o vetor: ");
    scanf("%d", &qtd);
    putchar('\n');

    // Declaração do vetor
    int numVet[qtd];

    // Lê os números e calcula a soma dos pares
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &numVet[i]);

        // Verifica se o número é par
        if (numVet[i] % 2 == 0)
        {
            acuSom += numVet[i];
            qtdPar++;
        }
    }

    // Calcula e exibe a média dos pares
    if (qtdPar > 0)
    {
        printf("\n# MEDIA DOS PARES = %.1lf", (double) acuSom / qtdPar);
    }
    else
    {
        printf("\n# NENHUM NUMERO PAR");
    }

    putchar('\n');
    return 0;
}
