#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, qtd, den = 0, fora = 0;

    // Solicita a quantidade de n�meros que o usu�rio vai digitar
    printf("# Quantos numeros voce vai digitar: ");
    scanf("%d", &qtd);

    // Loop para ler os n�meros
    for (int i = 0; i < qtd; i++)
    {
        // Solicita um n�mero ao usu�rio
        printf("# Digite um numero: ");
        scanf("%d", &n);

        // Verifica se o n�mero est� entre 10 e 20
        if ((n >= 10) && (n <= 20))
            den += 1; // Contador para n�meros dentro do intervalo

        else
            fora += 1; // Contador para n�meros fora do intervalo
    }

    // Exibe a quantidade de n�meros dentro e fora do intervalo
    printf("\n# %d DENTRO", den);
    printf("\n# %d FORA", fora);

    return 0; // Indica que o programa terminou com sucesso
}
