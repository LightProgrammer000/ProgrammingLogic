#include <stdio.h>

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    int x, y, som;

    // Entrada do valor de 'x'
    printf("# Digite o valor de 'x': ");
    scanf("%d", &x);

    // Entrada do valor de 'y'
    printf("# Digite o valor de 'y': ");
    scanf("%d", &y);

    // C�lculo da soma
    som = x + y;

    // Exibi��o do resultado
    printf("\n# Soma = %d\n", som);

    return 0;
}
