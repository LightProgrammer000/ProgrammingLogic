package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX43
{
    public static void main(String[] args)
    {
        // Quantidade e soma
        int n;
        double acuSom = 0;
        
        // Define Locale
        Locale.setDefault(Locale.US);
        
        // Entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            // Solicita quantidade
            System.out.print("# Quantos numeros voce vai digitar: ");
            n = ent.nextInt();
            
            // Vetor de números
            double vet[] = new double[n];
            
            // Recebe números e acumula soma
            for (int i = 0; i < n; i++)
            {
                System.out.print("# Digite um numero: ");
                vet[i] = ent.nextDouble();
                acuSom += vet[i];
            }
            
            // Exibe valores
            System.out.print("\n# VALORES =");
            for (int i = 0; i < n; i++)
            {
                System.out.print(" " + vet[i]);
            }
            
            // Exibe soma e média
            System.out.printf("\n# SOMA = %.2f\n", acuSom);
            System.out.printf("# MEDIA = %.2f\n", (acuSom/n));
        }
    }
}
