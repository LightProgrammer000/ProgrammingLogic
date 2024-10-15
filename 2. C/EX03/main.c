#include <stdio.h>
#include "dados.h" // Biblioteca personalizada para fun��es auxiliares

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    char nom1[50], nom2[50];
    int ida1, ida2;
    double media;

    // Entrada dos dados da primeira pessoa
    printf("\n# Dados da primeira pessoa:");
    printf("\n# Nome: ");
    ler_texto(nom1, 50); // Fun��o para ler o nome

    printf("# Idade: ");
    scanf("%d", &ida1);

    // Entrada dos dados da segunda pessoa
    printf("\n# Dados da segunda pessoa:");
    printf("\n# Nome: ");
    limpar_entrada(); // Fun��o para limpar o buffer
    ler_texto(nom2, 50);

    printf("# Idade: ");
    scanf("%d", &ida2);

    // C�lculo da idade m�dia com casting para double
    media = ((double) (ida1 + ida2)) / 2;

    // Exibi��o do resultado
    printf("\n# A idade media de %s, e %s = %.2lf anos\n", nom1, nom2, media);

    return 0;
}
