#include <stdio.h>

int main (int argc, char *argv[])
{
    double n1, n2, soma;

    // Solicita a primeira nota
    printf("# Digite a primeira nota: ");
    scanf("%lf", &n1);

    // Solicita a segunda nota
    printf("# Digite a segunda nota: ");
    scanf("%lf", &n2);

    // Calcula a soma das notas
    soma = n1 + n2;

    // Exibe a nota final
    printf("* Nota Final: %.1lf\n", soma);

    // Verifica se a soma é menor que 60
    if (soma < 60)
    {
        printf("\n# Reprovado\n");
    }

    return 0;
}
