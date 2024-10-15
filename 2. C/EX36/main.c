#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, qtd;

    // Solicita a quantidade de números a serem digitados
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Loop para ler os números
    for (int i = 0; i < qtd; i++)
    {
        // Solicita o número ao usuário
        printf("# Digite um numero: ");
        scanf("%d", &n);

        // Verifica se o número é positivo
        if (n > 0)
        {
            // Verifica se é par ou ímpar
            if (n % 2 == 0)
            {
                printf("# PAR POSITIVO\n");
            }

            else
            {
                printf("# IMPAR POSITIVO\n");
            }
        }

        // Verifica se o número é negativo
        else
        {
            if (n < 0)
            {

                // Verifica se é par ou ímpar
                if (n % 2 == 0)
                {
                    printf("# PAR NEGATIVO\n");
                }

                else
                {
                    printf("# IMPAR NEGATIVO\n");
                }
            }

            // Se não é positivo nem negativo, é nulo
            else
            {
                printf("# NULO\n");
            }
        }

        putchar('\n');
    }

    return 0;
}
