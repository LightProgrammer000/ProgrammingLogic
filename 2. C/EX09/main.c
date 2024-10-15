#include <stdio.h>
#include <math.h> // Inclui a biblioteca matemática para usar pow()

int main (int argc, char *argv[])
{
    double a, b, c;                 // Medidas fornecidas pelo usuário
    double areQua, areTri, areTra;  // Áreas a serem calculadas

    // Solicita a medida A
    printf("\n# Digite a medida A: ");
    scanf("%lf", &a);

    // Solicita a medida B
    printf("\n# Digite a medida B: ");
    scanf("%lf", &b);

    // Solicita a medida C
    printf("\n# Digite a medida C: ");
    scanf("%lf", &c);

    // Calcula a área do triângulo (base * altura / 2)
    areTri = (a * b) / 2.0;

    // Calcula a área do quadrado (lado ao quadrado)
    areQua = pow(a, 2);

    // Calcula a área do trapézio ((base maior + base menor) * altura / 2)
    areTra = ((a + b) * c) / 2.0;

    // Exibe as áreas calculadas
    printf("\n* AREA DO QUADRADO  = %.4lf", areQua);
    printf("\n* AREA DO TRIANGULO = %.4lf", areTri);
    printf("\n* AREA DO TRAPEZIO  = %.4lf\n", areTra);

    return 0;
}
