package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX01
{
    public static void main(String[] args) 
    {
        // Declaração das variáveis
        double lar, com, val, are, pre;
        
        // Define a localidade para o formato de saída
        Locale.setDefault(Locale.US);
        
        // Cria um objeto Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita a largura do terreno ao usuário
            System.out.print("# Digite a largura do terreno: ");
            lar = ent.nextDouble();
            
            // Solicita o comprimento do terreno ao usuário
            System.out.print("# Digite o comprimento do terreno: ");
            com = ent.nextDouble();
            
            // Solicita o valor do metro quadrado ao usuário
            System.out.print("# Digite o valor do metro quadrado: ");
            val = ent.nextDouble();
        }
        
        // Calcula a área do terreno
        are = lar * com;
        
        // Calcula o preço do terreno
        pre = are * val;
        
        // Exibe a área do terreno formatada
        System.out.println("\n# Area do terreno: " + String.format("%.2f", are));
        
        // Exibe o preço do terreno formatado
        System.out.println("# Preco do terreno: " + String.format("%.2f", pre));
    }
}
