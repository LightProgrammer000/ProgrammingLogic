#include <stdio.h>
#include <string.h>
#include "dados.h"

int main (int argc, char *argv[])
{
    // Variáveis para acumular altura, quantidade de pessoas, contagem de idades e nomes
    double acuAlt = 0;
    int idAux = 0, qtd, contIda = 0;

    // Solicita a quantidade de pessoas a serem digitadas
    printf("# Quantas pessoas serao digitadas: ");
    scanf("%d", &qtd);

    // Verifica se a quantidade está entre 1 e 5
    while ((qtd < 1) || (qtd > 5))
    {
        printf("# Valor maximo de 5 pessoas");
        printf("# Quantas pessoas serao digitadas: ");
        scanf("%d", &qtd);
    }

    // Vetores para armazenar idade, altura, nomes e auxiliar
    int vetIda[qtd];
    double vetAlt[qtd];
    char vetNom[qtd][50], aux[qtd][50];

    putchar('\n');

    // Loop para coletar dados das pessoas
    for (int i = 0; i < qtd; i++)
    {
        printf("# Dados da %da pessoa:\n", i+1);

        printf("# Nome: ");
        limpar_entrada();
        ler_texto(vetNom[i], 50);

        printf("# Idade: ");
        scanf("%d", &vetIda[i]);

        printf("# Altura: ");
        scanf("%lf", &vetAlt[i]);

        // Acumula a altura
        acuAlt += vetAlt[i];
        putchar('\n');
    }

    // Verifica quantas pessoas têm menos de 16 anos
    for (int i = 0; i < qtd; i++)
    {
        if (vetIda[i] < 16)
        {
            strcpy(aux[idAux], vetNom[i]);

            contIda++;
            idAux++;
        }
    }

    // Exibe a altura média
    printf("\n# Altura media: %.2lf", acuAlt/qtd);

    // Exibe a porcentagem de pessoas com menos de 16 anos
    printf("\n# Pessoas com menos de 16 anos: %.1lf %%", ((double)contIda / qtd) * 100);

    // Exibe os nomes das pessoas com menos de 16 anos
    for (int i = 0; i < idAux; i++)
    {
        printf("\n# %s", aux[i]);
    }

    putchar('\n');
    return 0;
}
