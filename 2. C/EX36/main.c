#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, qtd;

    // Solicita a quantidade de n�meros a serem digitados
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Loop para ler os n�meros
    for (int i = 0; i < qtd; i++)
    {
        // Solicita o n�mero ao usu�rio
        printf("# Digite um numero: ");
        scanf("%d", &n);

        // Verifica se o n�mero � positivo
        if (n > 0)
        {
            // Verifica se � par ou �mpar
            if (n % 2 == 0)
            {
                printf("# PAR POSITIVO\n");
            }

            else
            {
                printf("# IMPAR POSITIVO\n");
            }
        }

        // Verifica se o n�mero � negativo
        else
        {
            if (n < 0)
            {

                // Verifica se � par ou �mpar
                if (n % 2 == 0)
                {
                    printf("# PAR NEGATIVO\n");
                }

                else
                {
                    printf("# IMPAR NEGATIVO\n");
                }
            }

            // Se n�o � positivo nem negativo, � nulo
            else
            {
                printf("# NULO\n");
            }
        }

        putchar('\n');
    }

    return 0;
}
