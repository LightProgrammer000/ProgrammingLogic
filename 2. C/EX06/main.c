#include <stdio.h>
#include <math.h> // Inclui a biblioteca matem�tica

int main (int argc, char *argv[])
{
    double r, area;

    // Solicita o valor do raio do c�rculo
    printf("# Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    // Calcula a �rea do c�rculo
    area = M_PI * pow(r, 2);

    // Exibe a �rea com tr�s casas decimais
    printf("\n# Area: %.3lf\n", area);

    return 0;
}
