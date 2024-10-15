#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main (int argc, char *argv[])
{
    // Declara as variáveis para as dimensões da matriz e acumulação de soma
    int m, n;
    double acuSom = 0;

    // Solicita e lê a quantidade de linhas da matriz
    printf("# Qual a quantidade de linhas da matriz: ");
    scanf("%d", &m);

    // Solicita e lê a quantidade de colunas da matriz
    printf("# Qual a quantidade de colunas da matriz: ");
    scanf("%d", &n);

    // Declara a matriz e o vetor auxiliar
    double mat[m][n], aux[n];

    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < m; i++)
    {
        // Solicita os elementos de cada linha
        printf("\n# Digite os elementos da %da. linha: \n", i+1);

        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < n; j++)
        {
            // Solicita e lê cada elemento da matriz
            printf("# Elemento: ");
            scanf("%lf", &mat[i][j]);

            // Acumula a soma dos elementos da linha
            acuSom += mat[i][j];
        }

        // Armazena a soma acumulada no vetor auxiliar
        aux[i] = acuSom;
        acuSom = 0;  // Reseta a soma para a próxima linha
    }

    // Exibe os valores do vetor gerado
    printf("\n# Vetor Gerado:");
    for (int i = 0; i < m; i++)
    {
        printf("\n%.1lf", aux[i]);
    }

    // Finaliza com uma nova linha e encerra o programa
    putchar('\n');
    return 0;
}
