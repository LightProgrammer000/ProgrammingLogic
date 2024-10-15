package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX35
{
    public static void main(String[] args)
    {
        // Variáveis
        int n, qtd, den = 0, fora = 0; 

        // Lê a quantidade de números
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de números
            System.out.print("# Quantos numeros voce vai digitar: ");
            qtd = ent.nextInt();
            
            // Laço para ler números
            for (int i = 0; i < qtd; i++) 
            {
                // Lê um número
                System.out.print("# Digite um numero: ");
                n = ent.nextInt();
                
                // Verifica intervalo
                if ((n >= 10) && (n <= 20))
                {
                    den++; // Dentro
                }
                else
                {
                    fora++; // Fora
                }
            }
        }
        
        // Resultados
        System.out.println("# " + den + " DENTRO");
        System.out.println("# " + fora + " FORA");
    }
}