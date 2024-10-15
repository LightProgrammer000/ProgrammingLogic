#include <stdio.h>

int main (int argc, char *argv[])
{
    // Variáveis para controle e contagem
    int flag = 0;
    int qtd, idAux = 0, qtdPar = 0;

    // Solicita a quantidade de números a serem digitados
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Vetores para armazenar os números digitados e os pares encontrados
    int numVet[qtd], aux[qtd];

    // Loop para coletar os números
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &numVet[i]);

        // Verifica se o número é par
        if (numVet[i] % 2 == 0)
        {
            flag = 1; // Marca que pelo menos um par foi encontrado

            // Armazena o número par em 'aux'
            aux[idAux] = numVet[i];
            idAux++;
            qtdPar++; // Incrementa a contagem de pares
        }
    }

    // Se ao menos um par foi encontrado, exibe os pares
    if (flag == 1)
    {
        printf("\n# NUMEROS PARES:\n");

        // Loop para exibir os números pares
        for (int i = 0; i < qtdPar; i++)
        {
            printf("  %d ", aux[i]);
        }

        // Exibe a quantidade total de números pares
        printf("\n\n# QUANTIDADE DE PARES = %d\n", qtdPar);
    }

    return 0; // Retorna 0 indicando que o programa terminou corretamente
}
