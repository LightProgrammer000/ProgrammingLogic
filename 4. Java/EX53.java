package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX53
{
    public static void main(String[] args)
    {
        int qtd; // Quantidade de produtos
        double preCom, preVen, totCom = 0, totVen = 0; // Preços de compra, venda e totais

        // Configura o Locale para números decimais
        Locale.setDefault(Locale.US);
        
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Entrada da quantidade de produtos
            System.out.print("# Serao digitados dados de quantos produtos: ");
            qtd = ent.nextInt();

            int[] prdInd = new int[qtd];    // Índices dos produtos
            double[] luc = new double[qtd]; // Lucro percentual dos produtos

            // Loop para entrada de dados dos produtos
            for (int i = 0; i < qtd; i++)
            {
                ent.nextLine(); // Limpa o buffer
                
                // Exibe o número do produto
                System.out.printf("\n# Produto %d \n", i + 1);
                prdInd[i] = i; // Armazena o índice do produto

                // Entrada do nome do produto
                System.out.print("# Nome: ");
                ent.nextLine();

                // Entrada do preço de compra
                System.out.print("# Preco de compra: ");
                preCom = ent.nextDouble();

                // Entrada do preço de venda
                System.out.print("# Preco de venda: ");
                preVen = ent.nextDouble();

                // Calcula o lucro percentual
                luc[i] = ((preVen - preCom) / preCom) * 100;

                // Totaliza os preços de compra e venda
                totCom += preCom;
                totVen += preVen;
            }

            // Exibe cabeçalho do relatório
            System.out.println("\n*** RELATORIO ***");
            faixaLucro(luc, prdInd);    // Chama a função para exibir faixas de lucro
            totLuc(totCom, totVen);     // Chama a função para exibir valores totais
        }
    }

    // Analisa e exibe produtos em faixas de lucro
    private static void faixaLucro(double[] luc, int[] prdInd) 
    {
        // Exibe produtos com lucro abaixo de 10%
        System.out.print("\n# Lucro abaixo de 10%:");
        for (int i = 0; i < luc.length; i++)
        {
            // Verifica lucro abaixo de 10%
            if (luc[i] < 10)
            {
                System.out.print(" " + (prdInd[i] + 1)); // Exibe o índice do produto
            }
        }

        // Exibe produtos com lucro entre 10% e 20%
        System.out.print("\n# Lucro entre 10% e 20%:");
        for (int i = 0; i < luc.length; i++)
        {
            // Verifica lucro entre 10% e 20%
            if ((luc[i] >= 10) && (luc[i] <= 20))
            {
                System.out.print(" " + (prdInd[i] + 1)); // Exibe o índice do produto
            }
        }

        // Exibe produtos com lucro acima de 20%
        System.out.print("\n# Lucro acima de 20%:");
        for (int i = 0; i < luc.length; i++)
        {
            // Verifica lucro acima de 20%
            if (luc[i] > 20)
            {
                System.out.print(" " + (prdInd[i] + 1)); // Exibe o índice do produto
            }
        }        
    }

    // Calcula e exibe valores totais de compra, venda e lucro
    private static void totLuc(double totCom, double totVen)
    {
        // Exibe total de compra
        System.out.format("\n# Valor total de compra: %.2f", totCom); 

        // Exibe total de venda
        System.out.format("\n# Valor total de venda: %.2f", totVen); 

        // Exibe lucro total
        System.out.format("\n# Lucro total: %.2f\n", (totVen - totCom)); 
    }
}
