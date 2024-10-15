package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX33
{
    public static void main(String[] args)
    {
        int n1, n2;
        int som = 0, aux = 0;

        Locale.setDefault(Locale.US);

        try (Scanner ent = new Scanner(System.in))
        {
            System.out.println("# Digite dois numeros: ");

            System.out.print("# Digite N1: ");
            n1 = ent.nextInt();

            System.out.print("# Digite N2: ");
            n2 = ent.nextInt();
        }

        if (n1 > n2)
        {
            aux = n2;
            n2 = n1;
            n1 = aux;
        }

        for (int i = n1 + 1; i < n2; i++)
        {
            if (i % 2 != 0)
            {
                som += i;
            }
        }

        System.out.println("# Soma dos Impares = " + som);        
    }
}