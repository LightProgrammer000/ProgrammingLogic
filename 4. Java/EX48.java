package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX48
{
    public static void main(String[] args)
    {
        // Variáveis
        int qtd, qtdAbaiMed = 0;
        double acuSom = 0, med;
        
        // Define o locale para os EUA
        Locale.setDefault(Locale.US);
        
        // Lê a quantidade de elementos do vetor
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Quantos elementos vai ter o vetor: ");
            qtd = ent.nextInt();
        
            double[] vetNum = new double[qtd], aux = new double[qtd];
            
            // Lê os números e acumula a soma
            for (int i = 0; i < qtd; i++)
            {
                System.out.print("# Digite um numero: ");
                vetNum[i] = ent.nextDouble();
                acuSom += vetNum[i];
            }
            
            // Calcula a média
            med = acuSom / qtd;
            
            // Identifica elementos abaixo da média
            for (int i = 0; i < qtd; i++)
            {
                if (vetNum[i] < med)
                {
                    aux[qtdAbaiMed] = vetNum[i];
                    qtdAbaiMed++;
                }
            }
            
            // Exibe a média do vetor
            System.out.printf("\n# MEDIA DO VETOR = %.3f", med);
            
            // Exibe elementos abaixo da média
            System.out.print("\n# ELEMENTOS ABAIXO DA MEDIA:");
            for (int i = 0; i < qtdAbaiMed; i++)
            {
                System.out.printf("\n%.1f", aux[i]);
            }
            System.out.println("");
        }
    }
}
