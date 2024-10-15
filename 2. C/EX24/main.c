#include <stdio.h>

int main (int argc, char *argv[])
{
    int x, y; // Números

    printf("# Digite dois numeros: ");

    printf("\n# X: ");
    scanf("%d", &x); // Entrada para X

    printf("# Y: ");
    scanf("%d", &y); // Entrada para Y

    while (x != y) // Enquanto X for diferente de Y
    {
        if (x > y)
        {
            printf("# DECRESCENTE!\n"); // X > Y
        }

        else
        {
            printf("# CRESCENTE!\n"); // X < Y
        }

        printf("\n# Digite outros dois numeros: ");

        printf("\n# X: ");
        scanf("%d", &x); // Nova entrada para X

        printf("# Y: ");
        scanf("%d", &y); // Nova entrada para Y
    }

    return 0; // Fim
}
