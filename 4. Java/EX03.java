package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX03 
{
    public static void main(String[] args) 
    {
        // Declara variáveis
        String nom1, nom2;
        int ida1, ida2;
        double med;
        
        // Define localização
        Locale.setDefault(Locale.US);
        
        // Cria Scanner
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Dados da primeira pessoa
            System.out.println("# Dados da primeira pessoa:");
            
            System.out.print("# Nome 1: ");
            nom1 = ent.nextLine();
            
            System.out.print("# Idade 1: ");
            ida1 = ent.nextInt();
            
            // Dados da segunda pessoa
            System.out.println("\n# Dados da segunda pessoa:");
            ent.nextLine();
            
            System.out.print("# Nome 2: ");
            nom2 = ent.nextLine();
            
            System.out.print("# Idade 2: ");
            ida2 = ent.nextInt();
        }
        
        // Calcula a média
        med = (ida1 + ida2) / 2.0;
        
        // Exibe a média
        System.out.println("\n# A idade media de " + nom1 + " e " + nom2 + " = "
                            + String.format("%.2f", med) + " anos");
    }    
}
