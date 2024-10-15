package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX31
{
    public static void main(String[] args)
    {
        // Controle do loop
        boolean z = true;
        
        // Variáveis
        int n, i, som;

        // Define Locale
        Locale.setDefault(Locale.US);

        // Scanner para entrada
        try (Scanner ent = new Scanner(System.in))
        {
            // Loop principal
            while (z)
            {
                // Reinicia variáveis
                i = 0;
                som = 0;

                // Entrada do número
                System.out.print("# Digite um numero inteiro: ");
                
                // Verifica se é um número inteiro
                if (ent.hasNextInt())
                {
                    n = ent.nextInt();                
                }
                else
                {
                    System.out.println("Entrada invalida !");
                    ent.nextLine(); // Limpa a entrada inválida
                    continue;       // Volta para o início do loop
                }
                
                // Verifica se n é 0 (encerra)
                if (n == 0)
                {
                    z = false;
                }
                else
                {
                    // Soma 5 números pares
                    while (i < 5)
                    {
                        // Checa se é par
                        if (n % 2 == 0)
                        {
                            // Soma o número par
                            som += n;
                            i++;
                        }

                        // Incrementa n
                        n++;
                    }
                }

                // Exibe a soma
                System.out.println("# SOMA: " + som + "\n");
            }
        }
    }
}
