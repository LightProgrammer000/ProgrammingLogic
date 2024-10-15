package Apostila;

import java.util.Scanner;

public class EX04 
{
    public static void main(String[] args) 
    {
        // Declaração das variáveis
        int x, y, som;
        
        // Inicia o Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita o valor de X ao usuário
            System.out.print("# Digite o valor de X: ");
            x = ent.nextInt();
            
            // Solicita o valor de Y ao usuário
            System.out.print("# Digite o valor de Y: ");
            y = ent.nextInt();
        }
        
        // Calcula a soma de X e Y
        som = x + y;
        
        // Exibe a soma formatada
        System.out.println("# Soma = " + String.format("%d", som));
    }
}
