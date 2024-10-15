#include <stdio.h>  // Importa a biblioteca padrão de entrada e saída

int main (int argc, char *argv[])
{
    // Declara as variáveis para quantidade e contagem de números negativos
    int qtd, qtdNeg = 0, idAux = 0;

    // Solicita e lê a ordem da matriz
    printf("\n# Qual a ordem da matriz: ");
    scanf("%d", &qtd);

    // Declara a matriz e o vetor auxiliar
    int mat[qtd][qtd], aux[qtd];

    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < qtd; i++)
    {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < qtd; j++)
        {
            // Solicita e lê o valor de cada elemento da matriz
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

            // Verifica se o elemento é negativo e incrementa a contagem
            if (mat[i][j] < 0)
            {
                qtdNeg++;
            }

            // Verifica se o elemento está na diagonal principal
            if (i == j)
            {
                // Armazena o elemento da diagonal principal no vetor auxiliar
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe os valores da diagonal principal
    printf("\n# DIAGONAL PRINCIPAL: \n");
    for (int i = 0; i < idAux; i++)
    {
        printf("%d ", aux[i]);
    }

    // Exibe a quantidade de números negativos encontrados
    printf("\n\n# QUANTIDADE DE NEGATIVOS = %d\n", qtdNeg);

    return 0;
}
