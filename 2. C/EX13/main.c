#include <stdio.h>

int main (int argc, char *argv[])
{
    int n1, n2, n3, menor;

    // Entrada do primeiro valor e inicialização do 'menor' como o primeiro número
    printf("# Primeiro valor: ");
    scanf("%d", &n1);
    menor = n1;

    // Entrada do segundo e terceiro valor
    printf("# Segundo valor: ");
    scanf("%d", &n2);

    printf("# Terceiro valor: ");
    scanf("%d", &n3);

    // Verifica se todos os números são iguais (empate)
    if ((n1 == n2) && (n1 == n3))
    {
        printf("\n# Empate: %d\n", n1);
    }
    else
    {
        // Verifica se o segundo número é menor
        if (menor > n2)
        {
            menor = n2;
        }

        // Verifica se o terceiro número é menor
        if (menor > n3)
        {
            menor = n3;
        }

        // Exibe o menor número
        printf("\n# Menor: %d\n", menor);
    }

    return 0;
}
