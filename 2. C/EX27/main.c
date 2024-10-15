#include <stdio.h>

int main (int argc, char *argv[])
{
    int x, y;

    // Solicita os valores iniciais de X e Y
    printf("# Digite os valores das coordenadas X e Y:");

    printf("\n# X: ");
    scanf("%d", &x);  // L� o valor de X

    printf("\n# Y: ");
    scanf("%d", &y);  // L� o valor de Y

    // Continua enquanto X e Y n�o forem ambos zero
    while ((x != 0) && (y != 0))
    {
        // Verifica em qual quadrante as coordenadas est�o
        if (x > 0 && y > 0)
            printf("* QUADRANTE Q1\n");  // Primeiro quadrante

        else if (x > 0 && y < 0)
            printf("* QUADRANTE Q4\n");  // Quarto quadrante

        else if (x < 0 && y < 0)
            printf("* QUADRANTE Q3\n");  // Terceiro quadrante

        else
            printf("* QUADRANTE Q2\n");  // Segundo quadrante

        // Solicita novos valores de X e Y
        printf("\n# Digite os valores das coordenadas X e Y:");

        printf("\n# X: ");
        scanf("%d", &x);  // L� o novo valor de X

        printf("# Y: ");
        scanf("%d", &y);  // L� o novo valor de Y
    }

    return 0;
}
