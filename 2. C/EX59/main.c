#include <stdio.h>

int main (int argc, char *argv[])
{
    int qtd, acuSom = 0;

    // Solicita a ordem da matriz quadrada
    printf("# Qual a ordem da matriz: ");
    scanf("%d", &qtd);

    // Declara a matriz de ordem 'qtd'
    int mat[qtd][qtd];

    // Preenche a matriz e soma os elementos acima da diagonal principal
    for (int i = 0; i < qtd; i++)
    {
        putchar('\n');
        for (int j = 0; j < qtd; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

            // Soma apenas os elementos acima da diagonal principal
            if (i < j)
            {
                acuSom += mat[i][j];
            }
        }
    }

    // Exibe a soma dos elementos acima da diagonal principal
    printf("\n# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", acuSom);

    return 0;
}
