package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX25
{
    public static void main(String[] args)
    {
        int i = 0, som = 0, ida = 0; // Variáveis para contagem, soma e idade
        
        Locale.setDefault(Locale.US); // Formatação para números
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.println("# Digite as idades: ");
            
            // Loop para capturar idades até que uma idade negativa seja inserida
            while (ida >= 0)
            {
                System.out.print("# Idade: "); 
                ida = ent.nextInt(); // Entrada da idade
                
                // Verifica se a idade é negativa
                if (ida < 0)
                {
                    // Se for a primeira entrada e for negativa, não há cálculo
                    if (i == 0)                    
                    {
                        System.out.print("# IMPOSSIVEL CALCULAR \n");
                    }
                }
                else
                {
                    som += ida; // Soma das idades
                    i++; // Contador de idades válidas
                }
            }

            // Exibe a média se houver idades válidas
            if (i > 0)
            {
                System.out.format("# Media = %.2f \n", (double) som / i);
            }
        }
    }
}
