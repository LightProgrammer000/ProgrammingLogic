#include <stdio.h>

int main (int argc, char *argv[])
{
    // Vari�veis para controle e contagem
    int flag = 0;
    int qtd, idAux = 0, qtdPar = 0;

    // Solicita a quantidade de n�meros a serem digitados
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Vetores para armazenar os n�meros digitados e os pares encontrados
    int numVet[qtd], aux[qtd];

    // Loop para coletar os n�meros
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%d", &numVet[i]);

        // Verifica se o n�mero � par
        if (numVet[i] % 2 == 0)
        {
            flag = 1; // Marca que pelo menos um par foi encontrado

            // Armazena o n�mero par em 'aux'
            aux[idAux] = numVet[i];
            idAux++;
            qtdPar++; // Incrementa a contagem de pares
        }
    }

    // Se ao menos um par foi encontrado, exibe os pares
    if (flag == 1)
    {
        printf("\n# NUMEROS PARES:\n");

        // Loop para exibir os n�meros pares
        for (int i = 0; i < qtdPar; i++)
        {
            printf("  %d ", aux[i]);
        }

        // Exibe a quantidade total de n�meros pares
        printf("\n\n# QUANTIDADE DE PARES = %d\n", qtdPar);
    }

    return 0; // Retorna 0 indicando que o programa terminou corretamente
}
