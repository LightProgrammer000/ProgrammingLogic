#include <stdio.h>
#include <math.h> // Inclui a biblioteca matem�tica para usar pow()

int main (int argc, char *argv[])
{
    double a, b, c;                 // Medidas fornecidas pelo usu�rio
    double areQua, areTri, areTra;  // �reas a serem calculadas

    // Solicita a medida A
    printf("\n# Digite a medida A: ");
    scanf("%lf", &a);

    // Solicita a medida B
    printf("\n# Digite a medida B: ");
    scanf("%lf", &b);

    // Solicita a medida C
    printf("\n# Digite a medida C: ");
    scanf("%lf", &c);

    // Calcula a �rea do tri�ngulo (base * altura / 2)
    areTri = (a * b) / 2.0;

    // Calcula a �rea do quadrado (lado ao quadrado)
    areQua = pow(a, 2);

    // Calcula a �rea do trap�zio ((base maior + base menor) * altura / 2)
    areTra = ((a + b) * c) / 2.0;

    // Exibe as �reas calculadas
    printf("\n* AREA DO QUADRADO  = %.4lf", areQua);
    printf("\n* AREA DO TRIANGULO = %.4lf", areTri);
    printf("\n* AREA DO TRAPEZIO  = %.4lf\n", areTra);

    return 0;
}
