#include <stdio.h>

int main (int argc, char * argv[])
{
    int x;

    // Solicita ao usu�rio para digitar o valor de X
    printf("# Digite o valor de X: ");
    scanf("%d", &x);

    // Itera de 0 at� X
    for (int i = 0; i < x; i++)
    {
        // Verifica se i � �mpar
        if (i % 2 != 0)
        {
            // Imprime o valor �mpar de i
            printf("\n# X: %d", i);
        }
    }

    putchar('\n');
    return 0;
}
