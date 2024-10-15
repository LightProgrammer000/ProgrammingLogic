#include <stdio.h>  // Biblioteca padr�o

int main (int argc, char *argv[])
{
    int m, n, idAux = 0;  // Dimens�es da matriz e �ndice auxiliar

    // L� as dimens�es da matriz
    printf("# Qual a quantidade de linhas da matriz: ");
    scanf("%d", &m);
    printf("# Qual a quantidade de colunas da matriz: ");
    scanf("%d", &n);

    int mat[m][n], aux[m];  // Matriz e vetor auxiliar

    // Loop para ler os elementos da matriz
    for (int i = 0; i < m; i++)
    {
        putchar('\n');  // Nova linha
        for (int j = 0; j < n; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

            // Armazena valores negativos
            if (mat[i][j] < 0)
            {
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe os valores negativos
    printf("\n# VALORES NEGATIVOS: ");
    for (int i = 0; i < idAux; i++)
    {
        printf("\n# %d", aux[i]);
    }

    putchar('\n');  // Nova linha antes de encerrar
    return 0;  // Fim do programa
}
