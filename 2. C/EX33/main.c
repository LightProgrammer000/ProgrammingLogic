#include <stdio.h>

int main (int argc, char *argv[])
{
    int n1, n2, som = 0, aux = 0;

    printf("# Digite dois numeros: ");

    // Solicita o primeiro n�mero
    printf("\n\n# Digite N1: ");
    scanf("%d", &n1);

    // Solicita o segundo n�mero
    printf("# Digite N2: ");
    scanf("%d", &n2);

    // Ordena os n�meros
    if (n1 > n2)
    {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    // Soma os n�meros �mpares entre n1 e n2
    for (int i = n1 + 1; i <= n2 - 1; i++)
    {
        if (i % 2 != 0)
        {
            som += i;
        }
    }

    // Exibe a soma dos n�meros �mpares
    printf("# Soma dos Impares = %d\n", som);
}
