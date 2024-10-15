#include <stdio.h>
#include <math.h> // Biblioteca para fun��es matem�ticas

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    double bas, alt, area, perimetro, diagonal;

    // Entrada da base do ret�ngulo
    printf("# Base do retangulo: ");
    scanf("%lf", &bas);

    // Entrada da altura do ret�ngulo
    printf("# Altura do retangulo: ");
    scanf("%lf", &alt);

    // C�lculo da �rea, per�metro e diagonal
    area = bas * alt;
    perimetro = 2 * (bas + alt);
    diagonal = sqrt(pow(bas, 2) + pow(alt, 2));

    // Exibi��o dos resultados
    printf("\n# Area: %.2lf", area);
    printf("\n# Perimetro: %.2lf", perimetro);
    printf("\n# Diagonal: %.2lf\n", diagonal);

    return 0;
}
