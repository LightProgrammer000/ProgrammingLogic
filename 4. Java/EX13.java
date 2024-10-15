package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX13
{
    public static void main(String[] args) 
    {
        // Declaração das variáveis
        int n1, n2, n3, men;
        
        // Define a localização
        Locale.setDefault(Locale.US);
        Scanner ent = new Scanner(System.in);

        // Solicita o primeiro valor
        System.out.print("# Primeiro valor: ");
        n1 = ent.nextInt();
        men = n1; // Inicializa 'men' com o primeiro valor

        // Solicita o segundo valor
        System.out.print("# Segundo valor: ");
        n2 = ent.nextInt();

        // Solicita o terceiro valor
        System.out.print("# Terceiro valor: ");
        n3 = ent.nextInt();

        // Verifica se todos os valores são iguais
        if ((n1 == n2) && (n1 == n3))
        {
            System.out.println("# Empate: " + n1);            
        }
        
        else
        {
            // Compara e atualiza o menor valor
            if (men > n2)
            {
                men = n2;                
            }

            if (men > n3)
            {
                men = n3; // Atualiza 'men' se 'n3' for menor
            }

            // Exibe o menor valor
            System.out.println("# Menor: " + men);
        }           
    }
}
