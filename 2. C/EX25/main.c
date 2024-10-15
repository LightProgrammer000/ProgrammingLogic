#include <stdio.h>

int main (int argc, char *argv[])
{
    int i = 0, ida = 0, som = 0; // Contadores e soma

    printf("\n# Digite as idades: \n");

    while (ida >= 0) // Enquanto a idade for não negativa
    {
        printf("# Idade: ");
        scanf("%d", &ida); // Entrada da idade

        if (ida < 0) // Se a idade for negativa
        {
            if (i == 0) // Verifica se nenhuma idade foi digitada
            {
                printf("\n# IMPOSSIVEL CALCULAR"); // Mensagem de erro
            }
        }
        else // Idade válida
        {
            som += ida; // Soma as idades
            i++; // Incrementa contador
        }
    }

    if (i > 0) // Se houver idades válidas
    {
        printf("\n# Media: %.2lf", (double) som / i); // Calcula e exibe a média
    }

    putchar('\n'); // Nova linha
    return 0; // Fim
}
