#include <stdio.h>

int main (int argc, char *argv[])
{
    int n1, n2, som = 0, aux = 0;

    printf("# Digite dois numeros: ");

    // Solicita o primeiro número
    printf("\n\n# Digite N1: ");
    scanf("%d", &n1);

    // Solicita o segundo número
    printf("# Digite N2: ");
    scanf("%d", &n2);

    // Ordena os números
    if (n1 > n2)
    {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    // Soma os números ímpares entre n1 e n2
    for (int i = n1 + 1; i <= n2 - 1; i++)
    {
        if (i % 2 != 0)
        {
            som += i;
        }
    }

    // Exibe a soma dos números ímpares
    printf("# Soma dos Impares = %d\n", som);
}
