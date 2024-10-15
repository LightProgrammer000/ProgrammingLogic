package Apostila;

import java.util.Scanner;

public class EX36
{
    public static void main(String[] args)
    {
        // Variáveis
        int n, qtd;
        
        // Scanner para entrada
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de números
            System.out.print("# Quantos numeros voce vai digitar: ");
            qtd = ent.nextInt();
            
            // Laço para ler os números
            for (int i = 0; i < qtd; i++)
            {
                // Lê um número
                System.out.print("# Digite um numero: ");
                n = ent.nextInt();
                
                // Verifica se o número é positivo
                if (n > 0)
                {
                    // Verifica se é par ou ímpar
                    if (n % 2 == 0)
                        System.out.println("# PAR POSITIVO \n");
                    else
                        System.out.println("# IMPAR POSITIVO \n");
                }

                // Verifica se o número é negativo
                else if (n < 0)
                {
                    // Verifica se é par ou ímpar
                    if (n % 2 == 0)
                        System.out.println("# PAR NEGATIVO\n");
                    else
                        System.out.println("# IMPAR NEGATIVO\n");
                }

                // Número é zero
                else
                    System.out.println("# NULO\n");
            }
        }
    }
}