package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX17
{
    public static void main(String[] args)
    {
        // Variáveis para distâncias
        double mai, d2, d3;

        // Formatação de números
        Locale.setDefault(Locale.US);
        Scanner ent = new Scanner(System.in);

        System.out.println("# Digite as tres distancias");

        // D1
        System.out.print("* D1: ");
        mai = ent.nextDouble();

        // D2
        System.out.print("* D2: ");
        d2 = ent.nextDouble();

        // D3
        System.out.print("* D3: ");
        d3 = ent.nextDouble();

        // Verifica D2
        if (mai < d2)
        {
            mai = d2;            
        }

        // Verifica D3
        if (mai < d3)
        {
            mai = d3;
        }

        // Exibe maior distância
        System.out.println("* MAIOR DISTANCIA = " + String.format("%.2f", mai));
    }
}
