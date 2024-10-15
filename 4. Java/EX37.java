package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX37
{
    public static void main(String[] args)
    {
        // Variáveis
        int qtd;
        double n, som;

        // Define o locale para formato de números
        Locale.setDefault(Locale.US);
        
        // Scanner para entrada
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de casos
            System.out.print("# Quantos casos voce vai digitar: ");
            qtd = ent.nextInt();

            // Laço para cada caso
            for (int i = 0; i < qtd; i++)
            {
                // Reinicia a soma para cada caso
                som = 0;

                // Laço para ler 3 notas
                for (int j = 0; j < 3; j++)
                {
                    System.out.printf("# Nota [%d]: ", j+1);                    
                    n = ent.nextDouble();

                    // Aplica pesos às notas
                    if (j == 0)
                    {
                        som += n * 2;
                    }

                    else if (j == 1)
                    {
                        som += n * 3;
                    }

                    else
                    {
                        som += n * 5;
                    }
                }
                
                // Calcula e exibe a média
                System.out.println("# Media = " + String.format("%.1f", (double) som/10) + "\n");
            }
        }
    }
}
