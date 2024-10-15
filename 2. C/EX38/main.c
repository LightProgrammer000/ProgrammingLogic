#include <stdio.h>

int main (int argc, char *argv[])
{
    int n = 0;          // Número de casos a serem digitados
    double num, den;    // Numerador e denominador

    // Solicita o número de casos até que seja um valor positivo
    while (n <= 0)
    {
        printf("# Quantos casos voce vai digitar: ");
        scanf("%d", &n);
    }

    // Loop para capturar numerador e denominador para cada caso
    for (int i = 0; i < n; i++)
    {
        printf("\n# Entre com o numerador: ");
        scanf("%lf", &num); // Lê o numerador

        printf("# Entre com o denominador: ");
        scanf("%lf", &den); // Lê o denominador

        // Verifica se o denominador é diferente de zero
        if (den != 0)
        {
            printf("* DIVISAO = %.2lf\n", (num / den)); // Realiza e exibe a divisão
        }

        else
        {
            printf("* DIVISAO IMPOSSIVEL\n"); // Mensagem de erro para divisão por zero
        }
    }

    return 0;
}
