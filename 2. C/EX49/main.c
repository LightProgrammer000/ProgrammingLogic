#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    int qtd, qtdPar = 0, acuSom = 0;

    // Solicita a quantidade de elementos do vetor
    printf("# Quantos elementos vai ter o vetor: ");
    scanf("%d", &qtd);
    putchar('\n');

    // Declara��o do vetor
    int numVet[qtd];

    // L� os n�meros e calcula a soma dos pares
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &numVet[i]);

        // Verifica se o n�mero � par
        if (numVet[i] % 2 == 0)
        {
            acuSom += numVet[i];
            qtdPar++;
        }
    }

    // Calcula e exibe a m�dia dos pares
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
