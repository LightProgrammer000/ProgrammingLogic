package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX15
{
    public static void main(String[] args)
    {
        // Declaração das variáveis
        double pre, qtd, din, tot;

        // Define a localização para formatação de números
        Locale.setDefault(Locale.US);

        // Entrada de dados com scanner
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Preco unitario do produto: ");
            pre = ent.nextDouble();

            System.out.print("# Quantidade comprada: ");
            qtd = ent.nextDouble();

            System.out.print("# Dinheiro recebido: ");
            din = ent.nextDouble();
        }

        // Calcula o total da compra
        tot = pre * qtd;

        // Verifica se o dinheiro recebido é suficiente
        if (din < tot)
        {
            // Exibe mensagem de insuficiência de dinheiro
            System.out.println("* DINHEIRO INSUFICIENTE. FALTAM R$ " + 
            String.format("%.2f", tot - din));            
        }

        else
        {
            // Exibe o troco a ser devolvido
            System.out.println("* TROCO = R$ " + 
            String.format("%.2f", din - tot));
        }
    }   
}
