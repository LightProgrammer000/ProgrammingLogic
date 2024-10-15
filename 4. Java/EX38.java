package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX38
{
    public static void main(String[] args)
    {
        // Variáveis
        int n = 0;
        double num, den;
        
        // Define o locale para formato de números
        Locale.setDefault(Locale.US);
        
        // Lê a quantidade de casos até que seja maior que zero
        try (Scanner ent = new Scanner(System.in))
        {
            while (n <= 0)
            {
                System.out.print("# Quantos casos voce vai digitar: ");
                n = ent.nextInt();
            }
            
            // Laço para realizar divisões
            for (int i = 0; i < n; i++)
            {
                // Lê o numerador
                System.out.print("# Entre com o numerador: ");
                num = ent.nextDouble();
                
                // Lê o denominador
                System.out.print("# Entre com o denominador: ");
                den = ent.nextDouble();
                
                // Verifica se o denominador é diferente de zero
                if (den != 0)
                {
                    System.out.format("* DIVISAO = %.2f \n\n", (num / den));
                }
                
                else
                {
                    // Mensagem de erro para divisão por zero
                    System.out.println("* DIVISAO IMPOSSIVEL \n");
                }
            }
        }
    }
}
