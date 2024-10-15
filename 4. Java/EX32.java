package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX32
{
    public static void main(String[] args)
    {
        int n = 0;
        int limite = 10; // Limite da tabuada

        Locale.setDefault(Locale.US);

        try (Scanner ent = new Scanner(System.in))
        {
            // Solicita o valor da tabuada
            System.out.print("# Deseja a tabuada para qual valor: ");

            // Verifica se a entrada é um número inteiro
            if (ent.hasNextInt())
            {
                n = ent.nextInt();
            }
            else
            {
                System.out.println("# Valor inválido!");
                System.exit(0);
            }
            
            // Loop para gerar a tabuada
            System.out.println("");
            for (int i = 0; i <= limite; i++)
            {
                System.out.printf("# %d x %d = %d \n", n, i, n * i);
            }
            System.out.println("");
        }
    }
}
