#include <stdio.h>

int main (int argc, char *argv[])
{
    int idMai = 0, qtd;  // Inicializa idMai
    double mai = 0;      // Inicializa mai para evitar uso de lixo de mem�ria

    // Solicita ao usu�rio quantos n�meros ser�o digitados
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Cria um vetor para armazenar os n�meros
    double numVet[qtd];

    // Loop para ler os n�meros digitados pelo usu�rio
    for (int i = 0; i < qtd; i++)
    {
        printf("# Digite um numero: ");
        scanf("%lf", &numVet[i]);  // L� o n�mero como double
    }

    // Loop para encontrar o maior n�mero e sua posi��o
    for (int i = 0; i < qtd; i++)
    {
        // Compara o valor atual com o maior encontrado
        if ((i == 0) || (mai < numVet[i]))
        {
            mai = numVet[i]; // Atualiza o maior valor
            idMai = i;       // Atualiza a posi��o do maior valor
        }
    }

    // Exibe o maior valor
    printf("\n# MAIOR VALOR = %.2lf", mai);

    // Exibe a posi��o do maior valor
    printf("\n# POSICAO DO MAIOR VALOR = %d\n", idMai);

    return 0;
}
