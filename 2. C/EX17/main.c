#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara tr�s vari�veis para armazenar as dist�ncias
    double maior, d2, d3;

    // Solicita as tr�s dist�ncias ao usu�rio
    printf("# Digite as tres distancias\n");

    printf("* D1: ");
    scanf("%lf", &maior); // L� a primeira dist�ncia e assume como a maior inicialmente

    printf("* D2: ");
    scanf("%lf", &d2); // L� a segunda dist�ncia

    printf("* D3: ");
    scanf("%lf", &d3); // L� a terceira dist�ncia

    // Verifica se a segunda dist�ncia � maior
    if (maior < d2)
    {
        maior = d2;
    }

    // Verifica se a terceira dist�ncia � maior
    if (maior < d3)
    {
        maior = d3;
    }

    // Exibe a maior dist�ncia encontrada
    printf("* MAIOR DISTANCIA = %.2lf \n", maior);

    return 0;
}
