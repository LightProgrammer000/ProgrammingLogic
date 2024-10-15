#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara��o da vari�vel que armazena o valor da glicose
    double gli;

    // Solicita a medida da glicose ao usu�rio
    printf("# Digite a medida da glicose: ");
    scanf("%lf", &gli);

    // Classifica o n�vel de glicose
    if (gli <= 100)
    {
        printf("* Classificacao: normal\n");
    }

    else if (gli <= 140)
    {
        printf("* Classificacao: elevado\n");
    }

    else
    {
        printf("* Classificacao: diabetes\n");
    }

    return 0;
}
