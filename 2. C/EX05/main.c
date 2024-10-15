#include <stdio.h>

int main (int argc, char *argv[])
{
    int qtd;
    double pre, din, trc;

    // Solicita o preço unitário do produto
    printf("# Preco unitario do produto: ");
    scanf("%lf", &pre);

    // Solicita a quantidade comprada
    printf("# Quantidade comprada: ");
    scanf("%d", &qtd);

    // Solicita o valor de dinheiro recebido
    printf("# Dinheiro recebido: ");
    scanf("%lf", &din);

    // Calcula o troco
    trc = (din - pre * qtd);

    // Exibe o troco com duas casas decimais
    printf("\n# Troco: %.2lf\n", trc);

    return 0;
}
