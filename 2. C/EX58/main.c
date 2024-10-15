#include <stdio.h>

int main (int argc, char *argv[])
{
    int m, n;

    // Solicita o número de linhas da matriz
    printf("# Quantas linhas vai ter cada matriz: ");
    scanf("%d", &m);

    // Solicita o número de colunas da matriz
    printf("# Quantas colunas vai ter cada matriz: ");
    scanf("%d", &n);

    // Declara as matrizes A, B e C
    int matA[m][n], matB[m][n], matC[m][n];

    // Preenche a matriz A com os valores fornecidos pelo usuário
    printf("\n# Digite os valores da matriz A: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }

        putchar('\n');
    }

    // Preenche a matriz B com os valores fornecidos pelo usuário
    printf("# Digite os valores da matriz B: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }

        putchar('\n');
    }

    // Calcula e exibe a matriz soma (C = A + B)
    printf("# MATRIZ SOMA: \n#");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
            printf(" %d ", matC[i][j]);
        }

        putchar('\n');
    }

    return 0;
}
