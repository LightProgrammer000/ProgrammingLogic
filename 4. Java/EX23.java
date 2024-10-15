package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX23 
{
    public static void main(String[] args) 
    {
        // Formatação de números
        Locale.setDefault(Locale.US);
        
        // Leitura dos valores de X e Y
        try (Scanner scanner = new Scanner(System.in)) 
        {
            System.out.print("# Valor de X: ");
            double x = scanner.nextDouble();
            
            System.out.print("# Valor de Y: ");
            double y = scanner.nextDouble();
            
            // Exibe a posição no plano cartesiano
            System.out.println(determinePosition(x, y));
        }
    }

    // Determina a posição no plano cartesiano com base nos valores de X e Y
    private static String determinePosition(double x, double y)
    {
        if (x == 0 && y == 0) 
            return "# Origem";

        if (x == 0 && y != 0)
            return "# Eixo Y";

        if (x != 0 && y == 0) 
            return "# Eixo X";

        // Verifica os quadrantes
        if (x > 0)
            return (y > 0) ? "# Q1" : "# Q4";
        else
            return (y > 0) ? "# Q2" : "# Q3";
    }
}
