#include <stdio.h>

int main (int argc, char *argv[])
{
    int qtd, idAux = 0, qtdAbaiMed = 0;
    double acuSom = 0, med = 0;

    // Leitura da quantidade de elementos
    printf("# Quantos elementos vai ter o vetor: ");
    scanf("%d", &qtd);

    double vetNum[qtd], aux[qtd];

    // Leitura dos n�meros
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%lf", &vetNum[i]);
        acuSom += vetNum[i];
    }

    med = acuSom / qtd;

    // Identifica n�meros abaixo da m�dia
    for (int i = 0; i < qtd; i++)
    {
        if (vetNum[i] < med)
        {
            aux[idAux] = vetNum[i];
            idAux++;
            qtdAbaiMed++;
        }
    }

    // Exibe a m�dia e os n�meros abaixo dela
    printf("\n# MEDIA DO VETOR = %.3lf", med);
    printf("\n# ELEMENTOS ABAIXO DA MEDIA:");
    for (int i = 0; i < qtdAbaiMed; i++)
    {
        printf("\n%.1lf", aux[i]);
    }

    return 0;
}
