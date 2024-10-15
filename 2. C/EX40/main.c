#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    char tip;
    int n, qtd = 0, tot = 0;
    int qtdRat = 0, qtdSap = 0, qtdCoe = 0;

    // Solicita o número de casos de teste
    printf("# Quantos casos de teste serao digitados: ");
    scanf("%d", &n);

    if (n > 0)
    {
        // Loop para processar cada caso de teste
        for (int i = 0; i < n; i++)
        {
            printf("\n# Quantidade de cobaias: ");
            scanf("%d", &qtd);

            // Solicita e converte o tipo de cobaia para maiúsculo
            printf("# Tipo de cobaia: ");
            getchar();
            scanf("%c", &tip);
            tip = toupper(tip);

            // Atualiza a contagem de cobaias por tipo
            if (tip == 'R')
                qtdRat += qtd;

            else if (tip == 'S')
                qtdSap += qtd;

            else if (tip == 'C')
                qtdCoe += qtd;
        }

        // Calcula o total de cobaias
        tot = qtdRat + qtdSap + qtdCoe;
    }

    if (tot > 0)
    {
        // Exibe o relatório final
        printf("\n*** RELATORIO FINAL ***");
        printf("\n# Total: %d", tot);
        printf("\n# Total de coelhos: %d", qtdCoe);
        printf("\n# Total de ratos: %d", qtdRat);
        printf("\n# Total de sapos: %d", qtdSap);
        printf("\n# Percentual de coelhos: %.2lf %%", ((double)qtdCoe / tot) * 100);
        printf("\n# Percentual de ratos: %.2lf %%",   ((double)qtdRat / tot) * 100);
        printf("\n# Percentual de sapos: %.2lf %%\n", ((double)qtdSap / tot) * 100);
    }

    else
    {
        // Mensagem de erro caso não haja cobaias
        printf("\n# Quantidade invalida !");
    }

    putchar('\n');
    return 0;
}
