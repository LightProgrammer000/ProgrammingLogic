#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declaração das variáveis
    int min;
    double pag = 50.0;

    // Solicita a quantidade de minutos ao usuário
    printf("# Digite a quantidade de minutos: ");
    scanf("%d", &min);

    // Verifica se os minutos excedem 100 e calcula o valor adicional
    if (min > 100)
    {
        pag += (min - 100) * 2;
    }

    // Exibe o valor a pagar com duas casas decimais
    printf("\n* Valor a pagar: R$ %.2lf \n", pag);

    return 0;
}
