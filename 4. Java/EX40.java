package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX40
{
    public static void main(String[] args)
    {
        // Variáveis para tipo e contagem de cobaias
        char tip;
        int n, qtd, tot = 0;
        int qtdRat = 0, qtdSap = 0, qtdCoe = 0;

        // Define o locale e inicializa o Scanner
        Locale.setDefault(Locale.US);

        // Solicita o número de casos
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita o número de casos
            System.out.print("# Quantos casos de teste serao digitados: ");
            n = ent.nextInt();

            // Processa casos positivos
            if (n > 0)
            {
                for (int i = 0; i < n; i++)
                {
                    // Solicita quantidade de cobaias
                    System.out.print("\n# Quantidade de cobaias: ");
                    qtd = ent.nextInt();
                    
                    // Solicita tipo de cobaia
                    System.out.print("# Tipo de cobaia: ");
                    tip = ent.next().toUpperCase().charAt(0);
                    
                    // Acumula a quantidade de cada tipo
                    if (tip == 'R')
                        qtdRat += qtd;

                    else if (tip == 'S')
                        qtdSap += qtd;

                    else if (tip == 'C')
                        qtdCoe += qtd;
                }

                // Total de cobaias
                tot = qtdRat + qtdSap + qtdCoe;
            }

            // Caso inválido
            else
            {
                System.out.println("# Numeros de casos invalidos !");
            }

            // Relatório final
            if (tot > 0)
            {
                System.out.println("\n*** RELATORIO FINAL ***");
                System.out.printf("# Total: %d\n", tot);
                System.out.printf("# Total de coelhos: %d\n", qtdCoe);
                System.out.printf("# Total de ratos: %d\n", qtdRat);
                System.out.printf("# Total de sapos: %d\n", qtdSap);
                System.out.printf("# Percentual de coelhos: %.2f %%\n", (((double) qtdCoe / tot) * 100));
                System.out.printf("# Percentual de ratos: %.2f %%\n", (((double) qtdRat / tot) * 100));
                System.out.printf("# Percentual de sapos: %.2f %%\n", (((double) qtdSap / tot) * 100));
            }
        }
    }
}
