#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, qtd, den = 0, fora = 0;

    // Solicita a quantidade de números que o usuário vai digitar
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Loop para ler os números
    for (int i = 0; i < qtd; i++)
    {
        // Solicita um número ao usuário
        printf("# Digite um numero: ");
        scanf("%d", &n);

        // Verifica se o número está entre 10 e 20
        if ((n >= 10) && (n <= 20))
            den += 1; // Contador para números dentro do intervalo

        else
            fora += 1; // Contador para números fora do intervalo
    }

    // Exibe a quantidade de números dentro e fora do intervalo
    printf("\n# %d DENTRO", den);
    printf("\n# %d FORA", fora);

    return 0; // Indica que o programa terminou com sucesso
}
