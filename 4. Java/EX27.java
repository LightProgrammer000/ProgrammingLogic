package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX27
{
    public static void main(String[] args) 
    {
        int x, y; // Coordenadas X e Y

        Scanner ent = new Scanner(System.in);
        
        // Solicita as coordenadas X e Y
        System.out.println("# Digite os valores das coordenadas X e Y: ");
        
        // Lê o valor de X
        System.out.print("# X: ");
        x = ent.nextInt();
        
        // Lê o valor de Y
        System.out.print("# Y: ");
        y = ent.nextInt();
        
        // Loop até que X ou Y seja 0
        while ((x != 0) && (y != 0))
        {
            // Verifica o quadrante
            if ((x > 0) && (y > 0))
                System.out.println("* QUADRANTE Q1");
            
            else if ((x > 0) && (y < 0))
                System.out.println("* QUADRANTE Q4");
            
            else if ((x < 0) && (y < 0))
                System.out.println("* QUADRANTE Q3");
            
            else if ((x < 0) && (y > 0))
                System.out.println("* QUADRANTE Q2");
            
            // Solicita novas coordenadas
            System.out.println("\n# Digite os valores das coordenadas X e Y: ");
            
            // Lê o valor de X
            System.out.print("# X: ");
            x = ent.nextInt();
            
            // Lê o valor de Y
            System.out.print("# Y: ");
            y = ent.nextInt();   
        }
    }
}
