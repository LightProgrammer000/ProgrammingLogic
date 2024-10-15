package Apostila;

import java.util.Locale;
import java.util.Scanner;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class EX02 
{
    public static void main(String[] args) 
    {
        // Declaração das variáveis
        double bas, alt, are, per, dia;
        
        // Define a localidade para o formato de saída
        Locale.setDefault(Locale.US);
       
        // Cria um objeto Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita a base do retângulo ao usuário
            System.out.print("# Base do retangulo: ");
            bas = ent.nextDouble();
            
            // Solicita a altura do retângulo ao usuário
            System.out.print("# Altura do retangulo: ");
            alt = ent.nextDouble();
        }
        
        // Calcula a área do retângulo
        are = bas * alt;
        
        // Calcula o perímetro do retângulo
        per = 2 * (bas + alt);
        
        // Calcula a diagonal do retângulo usando Teorema de Pitágoras
        dia = sqrt(pow(bas, 2) + pow(alt, 2));
        
        // Exibe a área formatada
        System.out.println("\n# Area: " + String.format("%.4f", are));
        
        // Exibe o perímetro formatado
        System.out.println("# Perimetro: " + String.format("%.4f", per));
        
        // Exibe a diagonal formatada
        System.out.println("# Diagonal: " + String.format("%.4f", dia));     
    }
}
