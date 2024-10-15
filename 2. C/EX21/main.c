#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[])
{
    // Declaração de variáveis
    char per[9];        // Armazena a porcentagem de aumento
    double aum, salAtu; // 'aum' é o valor do aumento, 'salAtu' é o salário atual

    // Solicita o salário da pessoa
    printf("# Digite o salario da pessoa: ");
    scanf("%lf", &salAtu);

    // Define a porcentagem e calcula o aumento baseado no salário
    if (salAtu > 8000)
    {
        strcpy(per, "5");
        aum = 0.05 * salAtu;
    }

    else if (salAtu > 3000)
    {
        strcpy(per, "10");
        aum = 0.10 * salAtu;
    }

    else if (salAtu > 1000)
    {
        strcpy(per, "15");
        aum = 0.10 * salAtu; // Ajustado para 10%
    }

    else
    {
        strcpy(per, "20");
        aum = 0.15 * salAtu;
    }

    // Exibe o novo salário, o valor do aumento e a porcentagem aplicada
    printf("\n# Novo salario: R$ %.2lf", (salAtu + aum));
    printf("\n# R$ %.2lf", aum);
    printf("\n# Porcentagem = %s\n", per);

    return 0;
}
