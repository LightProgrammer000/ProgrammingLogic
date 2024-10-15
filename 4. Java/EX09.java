package Apostila;

import java.util.Scanner;
import static java.lang.Math.pow;
import java.util.Locale;

public class EX09
{
    public static void main(String[] args)
    {
        // Declara variáveis
        double areQua, areTri, areTra;
        double a, b, c;        
        
        // Define localização
        Locale.setDefault(Locale.US);
        Scanner ent = new Scanner(System.in);
        
        // Entrada de dados
        System.out.print("# Digite a medida A: ");
        a = ent.nextDouble();
        
        System.out.print("# Digite a medida B: ");
        b = ent.nextDouble();
        
        System.out.print("# Digite a medida C: ");
        c = ent.nextDouble();
        
        // Calcula áreas
        areQua = pow(a, 2);              // Área do quadrado
        areTri = (a * b) / 2;            // Área do triângulo
        areTra = ((a + b) * c) / 2;      // Área do trapézio

        // Exibe os resultados formatados
        System.out.println("\n# AREA DO QUADRADO = " + String.format("%.4f", areQua));
        System.out.println("# AREA DO TRIANGULO = " + String.format("%.4f", areTri));
        System.out.println("# AREA DO TRAPEZIO = " + String.format("%.4f", areTra));
    }
}
