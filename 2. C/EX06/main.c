#include <stdio.h>
#include <math.h> // Inclui a biblioteca matemática

int main (int argc, char *argv[])
{
    double r, area;

    // Solicita o valor do raio do círculo
    printf("# Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    // Calcula a área do círculo
    area = M_PI * pow(r, 2);

    // Exibe a área com três casas decimais
    printf("\n# Area: %.3lf\n", area);

    return 0;
}
