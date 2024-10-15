package Apostila;

import java.util.Scanner;
import java.util.Locale;

public class EX11
{
    public static void main(String[] args)
    {
        // Declara variáveis
        double n1, n2, som;
        
        // Define localização
        Locale.setDefault(Locale.US);
        
        // Cria Scanner e entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Digite a primeira nota: ");
            n1 = ent.nextDouble();
            
            System.out.print("# Digite a segunda nota: ");
            n2 = ent.nextDouble();
        }
        
        // Calcula a soma das notas
        som = n1 + n2;
        System.out.println("* Nota Final: " + String.format("%.1f", som));
        
        // Verifica se o aluno foi reprovado
        if (som < 60)
        {
            System.out.println("# Reprovado");            
        }
    }
}
