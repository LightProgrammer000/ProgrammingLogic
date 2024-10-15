#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara três variáveis para armazenar as distâncias
    double maior, d2, d3;

    // Solicita as três distâncias ao usuário
    printf("# Digite as tres distancias\n");

    printf("* D1: ");
    scanf("%lf", &maior); // Lê a primeira distância e assume como a maior inicialmente

    printf("* D2: ");
    scanf("%lf", &d2); // Lê a segunda distância

    printf("* D3: ");
    scanf("%lf", &d3); // Lê a terceira distância

    // Verifica se a segunda distância é maior
    if (maior < d2)
    {
        maior = d2;
    }

    // Verifica se a terceira distância é maior
    if (maior < d3)
    {
        maior = d3;
    }

    // Exibe a maior distância encontrada
    printf("* MAIOR DISTANCIA = %.2lf \n", maior);

    return 0;
}
