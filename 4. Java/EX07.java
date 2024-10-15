package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX07
{
    public static void main(String[] args) 
    {
        // Declara variáveis
        int horTra;
        String nom;
        double pag, valHor;
        
        // Define localização
        Locale.setDefault(Locale.US);
        
        // Cria Scanner
        try (Scanner ent = new Scanner(System.in))
        {
            // Entrada de dados
            System.out.print("# Nome: ");
            nom = ent.nextLine();
            
            System.out.print("# Valor por hora: ");
            valHor = ent.nextDouble();
            
            System.out.print("# Horas trabalhadas: ");
            horTra = ent.nextInt();
        }

        // Calcula o pagamento
        pag = valHor * horTra;
        
        // Exibe o pagamento
        System.out.println("# O pagamento para " + nom + " deve ser " + String.format("%.2f", pag));        
    }
}
