package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX20
{
    public static void main(String[] args)
    {
        int n1, n2, aux;
        
        // Formatação de números
        Locale.setDefault(Locale.US);
        
        // Leitura de dados
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.println("# Digite dois numeros inteiros");

            System.out.print("# N1: ");
            n1 = ent.nextInt();

            System.out.print("# N2: ");
            n2 = ent.nextInt();
        }

        // Troca de valores se necessário
        if (n1 < n2)
        {
            aux = n2;
            n2 = n1;
            n1 = aux;
        }

        // Verifica se são múltiplos
        if (n1 % n2 == 0)
        {
            System.out.println("# Sao multiplos");            
        }

        else
        {
            System.out.println("# Nao sao multiplos");
        }
    }
}
