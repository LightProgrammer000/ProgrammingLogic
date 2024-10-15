#include <stdio.h>

int main(int argc, char *argv[])
{
    double n, som = 0, med = 0; // Declaração de variáveis: n para a nota, som para a soma das notas

    // Solicita a primeira nota
    printf("# Digite a primeira nota: ");
    scanf("%lf", &n);

    // Valida a primeira nota
    while ((n < 0) || (n > 10))
    {
        printf("# Valor invalido! Tente novamente: ");
        scanf("%lf", &n);
    }

    som += n; // Acumula a primeira nota na soma

    // Solicita a segunda nota
    printf("\n# Digite a segunda nota: ");
    scanf("%lf", &n);

    // Valida a segunda nota
    while ((n < 0) || (n > 10))
    {
        printf("# Valor invalido! Tente novamente: ");
        scanf("%lf", &n);
    }

    som += n; // Acumula a segunda nota na soma

    // Calcula e exibe a média
    printf("\n# Media: %.2lf\n", (som / 2));

    return 0;
}
