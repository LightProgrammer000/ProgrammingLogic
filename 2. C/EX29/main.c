#include <stdio.h>

int main (int argc, char *argv[])
{
    int alc = 0, gas = 0, die = 0, cod = 0;

    // Loop até que o código 4 seja informado
    while (cod != 4)
    {
        // Solicita um código ao usuário
        printf("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &cod);

        // Conta o número de vezes que cada combustível é escolhido
        if (cod == 1)
            alc += 1;

        else if (cod == 2)
            gas += 1;

        else if (cod == 3)
            die += 1;
    }

    // Exibe a contagem dos combustíveis
    printf("\n# MUITO OBRIGADO");
    printf("\n# Alcool: %d", alc);
    printf("\n# Gasolina: %d", gas);
    printf("\n# Diesel: %d\n", die);

    return 0;
}
