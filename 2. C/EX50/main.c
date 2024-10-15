#include <stdio.h>
#include <string.h>
#include "dados.h"

int main (int argc, char *argv[])
{
    // Variáveis para armazenar a idade mais alta e a quantidade de pessoas
    int mai = 0, qtd;

    // Solicita a quantidade de pessoas a serem digitadas
    printf("# Quantas pessoas voce vai digitar: ");
    scanf("%d", &qtd);

    // Declaração dos vetores para idades e nomes
    int vetIda[qtd];
    char vetNom[qtd][50], auxNom[50];

    // Loop para coletar os dados de cada pessoa
    for (int i = 0; i < qtd; i++)
    {
        printf("\n# Dados da %da pessoa:\n", i + 1);

        // Solicita o nome
        printf("# Nome: ");
        limpar_entrada();
        ler_texto(vetNom[i], 50);

        // Solicita a idade
        printf("# Idade: ");
        scanf("%d", &vetIda[i]);

        // Verifica se a idade atual é a maior
        if ((i == 0) || (mai < vetIda[i]))
        {
            mai = vetIda[i];
            strcpy(auxNom, vetNom[i]); // Armazena o nome da pessoa mais velha
        }
    }

    // Exibe o nome da pessoa mais velha
    printf("\n# PESSOA MAIS VELHA: %s\n", auxNom);

    return 0;
}
