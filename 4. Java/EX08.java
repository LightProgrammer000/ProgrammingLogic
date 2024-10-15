package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX08
{
    public static void main(String[] args)
    {
        // Declara variáveis
        int dist;
        double comGas, conMed;
        
        // Define localização
        Locale.setDefault(Locale.US);
        
        // Cria Scanner
        try (Scanner ent = new Scanner(System.in))
        {
            // Entrada de dados
            System.out.print("# Distancia percorrida: ");
            dist = ent.nextInt();
            
            System.out.print("# Combustivel gasto: ");
            comGas = ent.nextDouble();
        }
        
        // Calcula o consumo médio
        conMed = dist / comGas;
        
        // Exibe o consumo médio formatado
        System.out.println("# Consumo medio = " + String.format("%.3f", conMed));        
    }
}
