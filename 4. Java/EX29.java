package Apostila;

import java.util.Scanner;

public class EX29
{
    public static void main(String[] args) 
    {
        // Contadores de cada tipo de combustível
        int alc = 0, gas = 0, die = 0, cod = 0;

        // Loop até que o código seja 4
        try (Scanner ent = new Scanner(System.in))
        {
            while (cod != 4)
            {
                // Solicita o código do tipo de combustível
                System.out.print("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
                cod = ent.nextInt();
                
                // Verifica o código e incrementa o contador
                if (cod == 1)
                {
                    alc++; // Alcool
                }
                
                else if (cod == 2)
                {
                    gas++; // Gasolina
                }
                
                else if (cod == 3)
                {
                    die++; // Diesel
                }
                
                else if (cod != 4)
                {
                    System.out.println("# Opcao invalida! Tente novamente.");
                }
            }
            
            // Exibe a contagem final de cada combustível
            System.out.println("\n# MUITO OBRIGADO");
            System.out.println("# Alcool: " + alc);
            System.out.println("# Gasolina: " + gas);
            System.out.println("# Diesel: " + die);
        }
    }
}