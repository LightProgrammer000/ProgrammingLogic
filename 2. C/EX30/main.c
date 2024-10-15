#include <stdio.h>

int main (int argc, char *argv[])
{
    int alc = 0, gas = 0, die = 0, cod = 0;

    // Loop até que o código 4 seja inserido
    while (cod != 4)
    {
        // Solicita ao usuário um código
        printf("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &cod);

        // Avalia o código digitado pelo usuário
        switch (cod)
        {
            case 1:

                // Incrementa contador de álcool
                alc += 1;
                break;

            case 2:

                // Incrementa contador de gasolina
                gas += 1;
                break;

            case 3:

                // Incrementa contador de diesel
                die += 1;
                break;

            case 4:

                // Exibe mensagem de encerramento
                printf("* Encerrando o programa \n");
                break;

            default:

                // Informa que a opção é inválida
                printf("# Opcao Invalida !\n\n");
                break;
        }
    }

    // Exibe os resultados
    printf("\n# MUITO OBRIGADO");
    printf("\n# Alcool: %d", alc);
    printf("\n# Gasolina: %d", gas);
    printf("\n# Diesel: %d\n", die);

    return 0;
}
