#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    int n1, n2, aux;

    // Solicita os dois n�meros inteiros
    printf("# Digite dois numeros inteiros\n");

    printf("# N1: ");
    scanf("%d", &n1);

    printf("# N2: ");
    scanf("%d", &n2);

    // Troca os valores se n1 for menor que n2
    if (n1 < n2)
    {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    // Verifica se n1 � m�ltiplo de n2
    if (n1 % n2 == 0)
    {
        printf("\n# Sao multiplos\n");
    }

    else
    {
        printf("\n# Nao sao multiplos\n");
    }

    return 0;
}
