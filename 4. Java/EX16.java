package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX16
{
    public static void main(String[] args)
    {
        // Declaração da variável para a medida da glicose
        double gli;

        // Define a localização para formatação de números
        Locale.setDefault(Locale.US);

        // Entrada de dados com scanner
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Digite a medida da glicose: ");
            gli = ent.nextDouble();
        }

        // Verifica a classificação da glicose
        if (gli <= 100)
        {
            System.out.println("* Classificacao: Normal");            
        }

        else
        {
            System.out.println("* Classificacao: diabetes");            
        }
    }   
}
