#include <stdio.h>

int main (int argc, char * argv[])
{
    int i = 0, n, som = 0, flag = 1; // Inicializa variáveis

    while (flag) // Enquanto a flag for verdadeira
    {
        // Solicita número ao usuário
        printf("\n# Digite um numero inteiro: ");

        // Lê o número
        scanf("%d", &n);

        // Se o número for zero
        if (n == 0)
        {
            // Encerrar o loop
            flag = 0;
        }
        else
        {
            // Enquanto não tiver 5 números
            while (i < 5)
            {
                // Se o número for par
                if (n % 2 == 0)
                {
                    // Adiciona à soma
                    som += n;

                    // Incrementa contador
                    i++;
                }

                // Incrementa número
                n++;
            }
        }

        // Exibe a soma
        printf("# SOMA: %d\n", som);

        // Reseta contador
        i = 0;

        // Reseta soma
        som = 0;
    }

    return 0; // Finaliza o programa
}
