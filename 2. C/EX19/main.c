#include <stdio.h>

int main (int argc, char * argv[])
{
    // Declaração de variáveis
    double val = 0; // Valor do produto
    int cod, qtd;   // Código do produto e quantidade

    // Solicita o código do produto
    printf("# Codigo do produto comprado: ");
    scanf("%d", &cod);

    // Solicita a quantidade comprada
    printf("# Quantidade comprada: ");
    scanf("%d", &qtd);

    // Verifica o código do produto e atribui o valor correspondente
    if (cod == 1)
    {
        val = 5.00;
    }

    else if (cod == 2)
    {
        val = 3.50;
    }

    else if (cod == 3)
    {
        val = 4.80;
    }

    else if (cod == 4)
    {
        val = 8.90;
    }

    else if (cod == 5)
    {
        val = 7.32;
    }

    // Calcula e exibe o valor total a pagar
    printf("\n* Valor a pagar: R$ %.2lf\n", (val * qtd));

    return 0;
}
