package Apostila;

// Importa Locale e Scanner
import java.util.Locale;
import java.util.Scanner;

// Importa PI e pow
import static java.lang.Math.PI;
import static java.lang.Math.pow;

public class EX06
{
    public static void main(String[] args) 
    {
        // Declara variáveis
        double r, are;

        // Define localização
        Locale.setDefault(Locale.US);

        // Cria Scanner
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita o raio
            System.out.print("# Digite o valor do raio do circulo: ");
            r = ent.nextDouble();
        }    

        // Calcula a área
        are = PI * pow(r, 2);

        // Exibe a área
        System.out.println("# Area: " + String.format("%.3f", are));
    }
}
