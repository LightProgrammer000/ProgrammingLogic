#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;

    // Solicita o valor para a tabuada
    printf("# Deseja a tabuada para qual valor: ");
    scanf("%d", &n);

    // Itera de 0 a 9 para calcular a tabuada
    for (int i = 0; i < 10; i++)
    {
        // Exibe o resultado da multiplicação
        printf("\n# %d x %d = %d", n, i+1, n * (i+1));
    }

    putchar('\n');
    return 0;
}
