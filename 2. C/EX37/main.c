#include <stdio.h>

int main (int argc, char *argv[])
{
    int qtd;            // N�mero de casos a serem digitados
    double som = 0, n;  // Soma das notas e nota atual

    // Solicita ao usu�rio o n�mero de casos
    printf("# Quantos casos voce vai digitar: ");
    scanf("%d", &qtd);

    // Loop para cada caso
    for (int i = 0; i < qtd; i++)
    {
        som = 0; // Zera a soma para cada caso
        putchar('\n');

        // Loop para capturar 3 notas
        for (int j = 0; j < 3; j++)
        {
            printf("# Nota %d: ", (j + 1)); // Solicita a nota
            scanf("%lf", &n);               // L� a nota

            // Aplica o peso correspondente � nota
            if (j == 0)
                som += n * 2;

            else if (j == 1)
                som += n * 3;

            else
                som += n * 5;
        }

        // Calcula e exibe a m�dia
        printf("# Media = %.1lf \n", som / 10);
    }

    return 0;
}
