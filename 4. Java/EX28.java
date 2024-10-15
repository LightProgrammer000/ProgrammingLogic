package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX28
{
    public static void main(String[] args)
    {
        double som = 0; // Soma das notas
        
        Scanner ent = new Scanner(System.in);
        
        // Solicita a primeira nota e adiciona à soma
        System.out.print("# Digite a primeira nota: ");
        som += protecao(ent.nextDouble(), ent);
        
        // Solicita a segunda nota e adiciona à soma
        System.out.print("# Digite a segunda nota: ");
        som += protecao(ent.nextDouble(), ent);
        
        // Calcula e exibe a média
        System.out.println("# Media: " + 
        String.format("%.2f", som / 2));                
    }
    
    // Método para validação de nota
    private static double protecao(double n, Scanner ent)
    {
        // Valida a nota, deve estar entre 0 e 10
        while ((n < 0) || (n > 10))
        {
            // Solicita uma nova nota se for inválida
            System.out.print("# Valor invalido! Tente novamente: ");
            n = ent.nextDouble();
        }

        return n; // Retorna a nota válida
    }
}
