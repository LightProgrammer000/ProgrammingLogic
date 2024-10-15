package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX52
{
    public static void main(String[] args) 
    {
        int qtd, qtdF = 0, qtdM = 0;
        double mai = 0, men = 0, acuAltM = 0;
        char sex;

        Locale.setDefault(Locale.US);
       
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Quantas pessoas serao digitadas: ");
            qtd = ent.nextInt();

            double[] vetAlt = new double[qtd];
            
            for (int i = 0; i < qtd; i++)
            {
                System.out.printf("\n# Altura da %da pessoa: ", i + 1);                
                vetAlt[i] = ent.nextDouble();
                
                // Inicializa maior e menor
                if (i == 0)
                {
                    mai = vetAlt[i];
                    men = vetAlt[i];
                }
                
                // Atualiza maior e menor
                if (mai < vetAlt[i]) mai = vetAlt[i];
                if (men > vetAlt[i]) men = vetAlt[i];
                
                System.out.printf("# Genero da %da pessoa: ", i + 1);
                sex = ent.next().toUpperCase().charAt(0);
                
                // Conta alturas de mulheres e homens
                if (sex == 'F')
                {
                    acuAltM += vetAlt[i];
                    qtdF++;
                }
                else
                {
                    qtdM++;
                }
            }
            
            // Exibe resultados
            System.out.printf("\n# Menor altura = %.2f", men);
            System.out.printf("\n# Maior altura = %.2f", mai);
            
            if (qtdF > 0)
            {
                System.out.printf("\n# Media das alturas das mulheres = %.2f", (acuAltM / qtdF));
            }
            
            else
            {
                System.out.println("# Nao ha mulheres para calcular a media");
            }
            
            System.out.printf("\n# Numero de homens = %d\n", qtdM);
        }
    }
}
