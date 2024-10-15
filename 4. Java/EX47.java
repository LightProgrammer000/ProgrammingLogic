package Apostila;

import java.util.Scanner;

public class EX47
{
    public static void main(String[] args)
    {
        // Quantidade de elementos
        int qtd;
        
        // Lê a quantidade de valores para os vetores
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Quantos valores vai ter cada vetor: ");
            qtd = ent.nextInt();

            double[] vetA = new double[qtd], vetB = new double[qtd], vetC = new double[qtd];
            
            // Lê os valores do vetor A
            System.out.println("\n# Digite os valores do vetor A: ");
            for (int i = 0; i < qtd; i++)
            {
                System.out.printf("# Valor [%d]: ", i + 1);
                vetA[i] = ent.nextDouble();
            }
            
            // Lê os valores do vetor B
            System.out.println("\n# Digite os valores do vetor B: ");
            for (int i = 0; i < qtd; i++)
            {
                System.out.printf("# Valor [%d]: ", i + 1);
                vetB[i] = ent.nextDouble();
            }
            
            // Calcula e exibe o vetor resultante C
            System.out.println("\n# VETOR RESULTANTE: ");
            for (int i = 0; i < qtd; i++)
            {
                vetC[i] = vetA[i] + vetB[i];
                System.out.println("-> " + vetC[i]);
            }
        }
    }
}
