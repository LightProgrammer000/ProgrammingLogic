#include <stdio.h>  // Biblioteca padrão

int main (int argc, char *argv[])
{
    int n;  // Ordem da matriz

    // Lê a ordem da matriz
    printf("# Qual a ordem da matriz: ");
    scanf("%d", &n);

    int aux[n], mat[n][n];  // Vetor auxiliar e matriz

    // Loop para ler elementos da matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

            // Atualiza o maior elemento da linha
            if ((j == 0) || (aux[i] < mat[i][j]))
            {
                aux[i] = mat[i][j];
            }
        }
    }

    // Exibe o maior elemento de cada linha
    printf("\n# MAIOR ELEMENTO DE CADA LINHA: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n# Linha %d: %d", i, aux[i]);
    }

    return 0;  // Fim do programa
}
