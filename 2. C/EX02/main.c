#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

// Função principal
int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double bas, alt, area, perimetro, diagonal;

    // Entrada da base do retângulo
    printf("# Base do retangulo: ");
    scanf("%lf", &bas);

    // Entrada da altura do retângulo
    printf("# Altura do retangulo: ");
    scanf("%lf", &alt);

    // Cálculo da área, perímetro e diagonal
    area = bas * alt;
    perimetro = 2 * (bas + alt);
    diagonal = sqrt(pow(bas, 2) + pow(alt, 2));

    // Exibição dos resultados
    printf("\n# Area: %.2lf", area);
    printf("\n# Perimetro: %.2lf", perimetro);
    printf("\n# Diagonal: %.2lf\n", diagonal);

    return 0;
}
