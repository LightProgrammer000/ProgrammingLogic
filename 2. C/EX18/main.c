#include <stdio.h>

int main (int argc, char *argv[])
{
    // Variáveis para opção, Fahrenheit e Celsius
    char opc;
    double fah, cel;

    // Pede a escala da temperatura
    printf("# Voce vai digitar a temperatura em qual escala (C/F): ");
    scanf("%c", &opc);

    // Se for Fahrenheit
    if (opc == 'F' || opc == 'f')
    {
        printf("\n# Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fah);

        cel = 5 / 9.0 * (fah - 32);  // Converte para Celsius

        printf("# Temperatura equivalente em Celsius: %.2lf\n", cel);
    }

    // Se for Celsius
    else if (opc == 'C' || opc == 'c')
    {
        printf("\n# Digite a temperatura em Celsius: ");
        scanf("%lf", &cel);

        fah = (9 * cel) / 5.0 + 32;  // Converte para Fahrenheit

        printf("# Temperatura equivalente em Fahrenheit: %.2lf\n", fah);
    }

    // Caso inválido
    else
    {
        printf("\n# Opcao Invalida !");
    }

    return 0;
}
