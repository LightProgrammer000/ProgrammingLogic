package Apostila;

import java.util.Scanner;

public class EX49
{
    public static void main(String[] args)
    {
        // Declara variáveis
        int qtd, qtdPar = 0, acuSom = 0;
        
        // Cria Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de elementos do vetor
            System.out.print("# Quantos elementos vai ter o vetor: ");
            qtd = ent.nextInt();
            
            // Declara vetor para os números
            int [] numVet = new int[qtd];
            
            // Lê os números e calcula soma e quantidade dos pares
            for (int i = 0; i < qtd; i++)
            {
                System.out.print("# Digite um numero: ");
                numVet[i] = ent.nextInt();
                
                // Verifica se o número é par
                if (numVet[i] % 2 == 0)
                {
                    acuSom += numVet[i]; // Acumula a soma dos pares
                    qtdPar++; // Conta os números pares
                }
            }
            
            // Calcula e exibe a média dos pares, se houver
            if (qtdPar > 0)
            {
                System.out.printf("# MEDIA DOS PARES = %.0f\n", (double) acuSom / qtdPar);
            }
            
            else
            {
                System.out.println("# NENHUM NUMERO PAR"); // Mensagem caso não haja pares
            }
        }
    }
}
