#include <stdio.h>
#include <math.h> // Inclui a biblioteca matemática para funções como pow() e sqrt()

int main (int argc, char *argv[])
{
    double a, b, c;     // Coeficientes da equação
    double x1, x2, del; // Raízes e discriminante

    // Solicita os coeficientes da equação do segundo grau
    printf("# Coeficiente a: ");
    scanf("%lf", &a);

    printf("# Coeficiente b: ");
    scanf("%lf", &b);

    printf("# Coeficiente c: ");
    scanf("%lf", &c);

    // Calcula o discriminante
    del = pow(b, 2) - 4 * a * c;

    // Verifica se a equação é válida (a ≠ 0 e del ≥ 0)
    if ( (a == 0) || (del < 0) )
    {
        printf("\n* Esta equacao esta invalidada ou nao possui raizes reais\n");
    }
    else
    {
        // Calcula as raízes da equação
        x1 = (-b + sqrt(del)) / (2 * a);
        x2 = (-b - sqrt(del)) / (2 * a);

        // Exibe as raízes
        printf("* X1 = %.4lf\n", x1);
        printf("* X2 = %.4lf\n", x2);
    }

    return 0;
}
