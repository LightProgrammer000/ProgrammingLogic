package Apostila;

import java.util.Scanner;

public class EX39
{
    public static void main(String[] args)
    {
        int n;

        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Digite o valor de N: ");
            n = ent.nextInt();
        }
        
        // Verifica se N é menor ou igual a 15
        if (n <= 15)
        {
            System.out.printf("# Fatorial = %d \n", fatorial(n));            
        }
        
        else
        {
            System.out.println("# Digite valores abaixo de 15 \n");
        }   
    }
    
    // Calcula o fatorial de N
    private static int fatorial(int n)
    {
        int fat = 1;
        
        // Calcula o fatorial usando um loop
        for (int i = 1; i <= n; i++)
        {
            fat *= i;             
        }
        
        return fat;
    }    
}
