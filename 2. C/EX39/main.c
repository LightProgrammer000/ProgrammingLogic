#include <stdio.h>

// Função que calcula o fatorial de n
int fatorial(int n)
{
    int fat = 1; // Inicializa o fatorial

    // Loop para calcular o fatorial
    for (int i = 1; i <= n; i++)
    {
        fat *= i; // Multiplica fat por i
    }

    return fat; // Retorna o fatorial
}

// Função principal
int main (int argc, char *argv[])
{
    int n; // Declara n

    printf("# Digite o valor de N: "); // Solicita valor
    scanf("%d", &n); // Lê o valor de n

    if (n <= 15) // Verifica se n é válido
    {
        printf("# Fatorial = %d\n", fatorial(n)); // Exibe o fatorial
    }

    else
    {
        printf("# Digite valores abaixo de 15"); // Mensagem de erro
    }

    return 0; // Sucesso
}
