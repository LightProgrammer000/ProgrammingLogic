#include <stdio.h>

int main (int argc, char * argv[])
{
    int i = 0, n, som = 0, flag = 1; // Inicializa vari�veis

    while (flag) // Enquanto a flag for verdadeira
    {
        // Solicita n�mero ao usu�rio
        printf("\n# Digite um numero inteiro: ");

        // L� o n�mero
        scanf("%d", &n);

        // Se o n�mero for zero
        if (n == 0)
        {
            // Encerrar o loop
            flag = 0;
        }
        else
        {
            // Enquanto n�o tiver 5 n�meros
            while (i < 5)
            {
                // Se o n�mero for par
                if (n % 2 == 0)
                {
                    // Adiciona � soma
                    som += n;

                    // Incrementa contador
                    i++;
                }

                // Incrementa n�mero
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
