#include <stdio.h>
#include "dados.h"

int main (int argc, char *argv[])
{
    int qtd;
    int flag1 = 0, flag2 = 0, flag3 = 0;
    char prd[50];
    double preCom, preVen, totCom = 0, totVen = 0;

    printf("# Serao digitados dados de quantos produtos: ");
    scanf("%d", &qtd);

    int prdInd[qtd];
    double luc[qtd];

    for (int i = 0; i < qtd; i ++)
    {
        printf("\n# Produto %d:", i+1);

        printf("\n# Nome: ");
        limpar_entrada();
        ler_texto(prd, 50);
        prdInd[i] = i;

        printf("# Preco de compra: ");
        scanf("%lf", &preCom);

        printf("# Preco de venda: ");
        scanf("%lf", &preVen);

        luc[i] = ((preVen - preCom) / preCom) * 100;

        totCom += preCom;
        totVen += preVen;
    }

    printf("\n*** RELATORIO ***");

    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] < 10)
            flag1 = 1;

        else if ((luc[i] >= 10) && (luc[i] <= 20))
            flag2 = 1;

        else if (luc[i] > 20)
            flag3 = 1;
    }

    if (flag1 == 1)
    {
        printf("\n# Lucro abaixo de 10%%: ");
        for (int i = 0; i < qtd; i++)
        {
            if (luc[i] < 10)
            {
                printf("%d ", prdInd[i] + 1);
            }
        }
    }


    if (flag2 == 1)
    {
        printf("\n# Lucro entre 10%% e 20%%: ");
        for (int i = 0; i < qtd; i++)
        {
            if ((luc[i] >= 10) && (luc[i] <= 20))
            {
                printf("%d ", prdInd[i] + 1);
            }
        }
    }


    if (flag3 == 1)
    {
        printf("\n# Lucro acima de 20%%: ");
        for (int i = 0; i < qtd; i++)
        {
            if (luc[i] > 20)
            {
                printf("%d ", prdInd[i] + 1);
            }
        }
    }

    // Exibe totais e lucro
    printf("\n# Valor total de compra: %.2lf", totCom);
    printf("\n# Valor total de venda: %.2lf", totVen);
    printf("\n# Lucro total: %.2lf \n", (totVen - totCom));

    return 0;
}
