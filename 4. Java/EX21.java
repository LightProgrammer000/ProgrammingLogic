package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX21
{
    public static void main(String[] args) 
    {
        String per;
        double aum, salAtu;

        // Formatação de números
        Locale.setDefault(Locale.US);
        
        // Leitura do salário atual
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Digite o salario da pessoa: ");
            salAtu = ent.nextDouble();
        }

        // Define o percentual e o aumento
        if (salAtu > 8000)
        {
            per = "5";
            aum = 0.05 * salAtu;
        }
        else if (salAtu > 3000)
        {
            per = "10";
            aum = 0.10 * salAtu;
        }
        else if (salAtu > 1000)
        {
            per = "15";
            aum = 0.15 * salAtu;
        }
        else
        {
            per = "20";
            aum = 0.20 * salAtu;
        }

        // Exibe resultados
        System.out.printf("# Novo salario: R$ %.2f \n", (salAtu + aum));
        System.out.printf("# Aumento: R$ %.2f \n", aum);
        System.out.printf("# Porcentagem = %s%%\n", per);
    }
}
