package Apostila;

import java.util.Scanner;
import java.util.Locale;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class EX12
{
    public static void main(String[] args)
    {
        // Declara variáveis
        double a, b, c;
        double x1, x2, del;
        
        // Define localização
        Locale.setDefault(Locale.US);
       
        // Entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Coeficiente a: ");
            a = ent.nextDouble();
            
            System.out.print("# Coeficiente b: ");
            b = ent.nextDouble();
            
            System.out.print("# Coeficiente c: ");
            c = ent.nextDouble();
        }
        
        // Calcula o discriminante
        del = pow(b, 2) - 4 * a * c;
        
        // Verifica se a equação é válida
        if ((a == 0) || (del < 0))
        {
            System.out.println("* Esta equacao esta invalidada ou nao possui raizes reais");                        
        }
        
        else
        {
            // Calcula as raízes da equação
            x1 = (-b + sqrt(del)) / (2 * a);
            x2 = (-b - sqrt(del)) / (2 * a);

            // Exibe as raízes
            System.out.println("* X1 = " + String.format("%.4f", x1));
            System.out.println("* X2 = " + String.format("%.4f", x2));
        }        
    }
}
