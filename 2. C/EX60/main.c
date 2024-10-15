#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
    int n, qtd, idAux = 0;
    double acuSomPos = 0;

    // Solicita a ordem da matriz
    printf("# Qual a ordem da matriz: ");
    scanf("%d", &qtd);

    // Declara o vetor auxiliar e as duas matrizes
    double aux[qtd];
    double mat[qtd][qtd], matAlt[qtd][qtd];

    // Preenche a matriz e realiza cálculos
    for (int i = 0; i < qtd; i++)
    {
        putchar('\n');
        for (int j = 0; j < qtd; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%lf", &mat[i][j]);

            // Acumula a soma dos valores positivos
            if (mat[i][j] > 0)
            {
                acuSomPos += mat[i][j];
            }

            // Eleva ao quadrado os valores negativos para a matriz alterada
            if (mat[i][j] < 0)
            {
                matAlt[i][j] = pow(mat[i][j], 2);
            }

            // Mantém os valores não negativos na matriz alterada
            else
            {
                matAlt[i][j] = mat[i][j];
            }

            // Armazena os elementos da diagonal principal no vetor auxiliar
            if (i == j)
            {
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe a soma dos valores positivos
    printf("\n# SOMA DOS POSITIVOS: %.1lf\n", acuSomPos);

    // Solicita e exibe uma linha escolhida
    printf("\n# Escolha uma linha: ");
    scanf("%d", &n);

    printf("# LINHA ESCOLHIDA: ");
    for (int j = 0; j < qtd; j++)
    {
        printf(" %.1lf ", mat[n][j]);
    }

    // Solicita e exibe uma coluna escolhida
    printf("\n\n# Escolha uma coluna: ");
    scanf("%d", &n);

    printf("# COLUNA ESCOLHIDA: ");
    for (int i = 0; i < qtd; i++)
    {
        printf(" %.1lf ", mat[i][n]);
    }

    // Exibe os elementos da diagonal principal
    printf("\n\n# DIAGONAL PRINCIPAL: ");
    for (int i = 0; i < idAux; i++)
    {
        printf(" %.1lf ", aux[i]);
    }

    // Exibe a matriz alterada
    printf("\n\n# MATRIZ ALTERADA:");
    for (int i = 0; i < qtd; i++)
    {
        putchar('\n');
        for (int j = 0; j < qtd; j++)
        {
            printf(" %.1lf ", matAlt[i][j]);
        }
    }

    putchar('\n');
    return 0;
}
