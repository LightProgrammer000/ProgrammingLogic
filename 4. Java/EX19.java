package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX19
{
    public static void main(String[] args)
    {
        int cod, qtd;
        double val;
        
        // Formatação de números
        Locale.setDefault(Locale.US);
        
        // Leitura de dados
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Codigo do produto comprado: ");
            cod = ent.nextInt();
            
            System.out.print("# Quantidade comprada: ");
            qtd = ent.nextInt();
        }
        
        // Definindo o valor com base no código
        if (cod == 1)
        {
            val = 5.00;
        }
        
        else if (cod == 2)
        {
            val = 3.50;
        }
        
        else if (cod == 3)
        {
            val = 4.80;            
        }
        
        else if (cod == 4)
        {
            val = 8.90;            
        }
        
        else if (cod == 5)
        {
            val = 7.32;            
        }
        
        else
        {
            val = 0;
        }
        
        // Cálculo e exibição do valor a pagar
        System.out.println("* Valor a pagar: R$ " + 
        String.format("%.2f", val * qtd));
    }
}
