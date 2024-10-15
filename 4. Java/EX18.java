package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX18
{
    public static void main(String[] args)
    {
        char opc;
        double fah, cel;
        
        // Formatação de números
        Locale.setDefault(Locale.US);

        // Escolha da escala
        try (Scanner ent = new Scanner(System.in))
        {
            // Escolha da escala
            System.out.print("# Voce vai digitar a temperatura em qual escala (C/F): ");
            opc = ent.next().toUpperCase().charAt(0);
            
            if (opc == 'F')
            {
                // Entrada em Fahrenheit
                System.out.print("# Digite a temperatura em Fahrenheit: ");
                fah = ent.nextDouble();
                
                // Conversão para Celsius
                cel = (double) 5/9 * (fah - 32);
                System.out.println("# Temperatura equivalente em Celsius: " +
                String.format("%.2f", cel));
            }
            
            else if (opc == 'C')
            {
                // Entrada em Celsius
                System.out.print("# Digite a temperatura em Celsius: ");
                cel = ent.nextDouble();
                
                // Conversão para Fahrenheit
                fah = (double) (9 * cel) / 5 + 32;
                System.out.println("# Temperatura equivalente em Fahrenheit: " +
                String.format("%.2f", fah));
            }

            else
            {
                // Opção inválida
                System.out.println("# Opcao Invalida!");
            }
        }
    }
}
