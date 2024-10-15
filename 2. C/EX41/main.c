#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    char tip;
    int n, i = 0, qtd = 0, tot = 0;
    int qtdRat = 0, qtdSap = 0, qtdCoe = 0;

    // Solicita número de casos
    printf("# Quantos casos de teste serao digitados: ");
    scanf("%d", &n);

    if (n > 0)
    {
        // Processa os casos
        while (i < n)
        {
            printf("\n# Quantidade de cobaias: ");
            scanf("%d", &qtd);

            printf("# Tipo de cobaia: ");
            getchar();
            scanf("%c", &tip);
            tip = toupper(tip);

            // Atualiza a contagem por tipo
            switch (tip)
            {
                case 'R':
                    qtdRat += qtd;
                    break;

                case 'S':
                    qtdSap += qtd;
                    break;

                case 'C':
                    qtdCoe += qtd;
                    break;

                default:
                    printf("# Opcao invalida !\n");
                    i--;
                    break;
            }

            i++;
        }

        tot = qtdRat + qtdSap + qtdCoe;
    }

    else
    {
        printf("\n# Numeros de casos invalidos !");
    }

    if (tot > 0)
    {
        // Relatório final
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
        printf("\n# Quantidade invalida !");
    }

    putchar('\n');
    return 0;
}
