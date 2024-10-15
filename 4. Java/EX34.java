package Apostila;

import java.util.Scanner;

public class EX34
{
    public static void main(String[] args)
    {
        int x = 0;

        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Digite o valor de X: ");
            
            // Verifica se a entrada é um número inteiro
            if (ent.hasNextInt())
            {
                x = ent.nextInt();
            }
            
            else
            {
                System.out.println("# Valor inválido!");
                System.exit(0);
            }
        }

        // Verifica se x é positivo
        if (x <= 0)
        {
            System.out.println("# O valor de X deve ser maior que zero.");
            return; // Encerra o programa
        }

        // Imprime números ímpares
        for (int i = 0; i < x; i++)
        {
            if (i % 2 != 0)
            {
                System.out.println("# X: " + i);                
            }
        }
    }
}
