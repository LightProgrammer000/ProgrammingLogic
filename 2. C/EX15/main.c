#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declaração das variáveis
    double pre, din, qtd, total = 0;

    // Solicita o preço unitário do produto
    printf("# Preco unitario do produto: ");
    scanf("%lf", &pre);

    // Solicita a quantidade comprada
    printf("# Quantidade comprada: ");
    scanf("%lf", &qtd);

    // Solicita o dinheiro recebido
    printf("# Dinheiro recebido: ");
    scanf("%lf", &din);

    // Calcula o valor total da compra
    total = pre * qtd;
    putchar('\n');  // Adiciona uma linha em branco

    // Verifica se o dinheiro é suficiente e calcula o troco ou o valor faltante
    if (din < total)
    {
        printf("* DINHEIRO INSUFICIENTE. FALTAM R$ %.2lf\n", (total - din));
    }

    else
    {
        printf("* TROCO = R$ %.2lf\n", (din - total));
    }

    return 0;
}
