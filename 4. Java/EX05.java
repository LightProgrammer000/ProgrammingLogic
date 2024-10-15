package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX05 
{
    public static void main(String[] args) 
    {
        int qtd;
        double pre, din, trc;
                
        Locale.setDefault(Locale.US);
        
        try (Scanner ent = new Scanner(System.in))
        {
            // Preço do produto
            System.out.print("# Preco unitario do produto: ");
            pre = ent.nextDouble();
            
            // Quantidade comprada
            System.out.print("# Quantidade comprada: ");
            qtd = ent.nextInt();
            
            // Dinheiro recebido
            System.out.print("# Dinheiro recebido: ");
            din = ent.nextDouble();
        }
        
        // Calcula o troco
        trc = (din - pre * qtd);
        
        // Exibe o troco
        System.out.println("\n# Troco: " + String.format("%.2f", trc));
    }
}
