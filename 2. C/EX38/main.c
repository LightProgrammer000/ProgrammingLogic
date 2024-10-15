#include <stdio.h>

int main (int argc, char *argv[])
{
    int n = 0;          // N�mero de casos a serem digitados
    double num, den;    // Numerador e denominador

    // Solicita o n�mero de casos at� que seja um valor positivo
    while (n <= 0)
    {
        printf("# Quantos casos voce vai digitar: ");
        scanf("%d", &n);
    }

    // Loop para capturar numerador e denominador para cada caso
    for (int i = 0; i < n; i++)
    {
        printf("\n# Entre com o numerador: ");
        scanf("%lf", &num); // L� o numerador

        printf("# Entre com o denominador: ");
        scanf("%lf", &den); // L� o denominador

        // Verifica se o denominador � diferente de zero
        if (den != 0)
        {
            printf("* DIVISAO = %.2lf\n", (num / den)); // Realiza e exibe a divis�o
        }

        else
        {
            printf("* DIVISAO IMPOSSIVEL\n"); // Mensagem de erro para divis�o por zero
        }
    }

    return 0;
}
