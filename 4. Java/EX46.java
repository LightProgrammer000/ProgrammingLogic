package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX46
{
    public static void main(String[] args)
    {
        // Inicializa variáveis
        int idMai = 0, qtd;
        double mai = 0;
        
        // Define o locale
        Locale.setDefault(Locale.US);
        
        // Lê a quantidade de números
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Quantos numeros voce vai digitar: ");
            qtd = ent.nextInt();
            
            // Declara vetor
            double [] numVet = new double[qtd];
            
            // Lê os números
            for (int i = 0; i < qtd; i++)
            {
                System.out.print("# Digite um numero: ");
                numVet[i] = ent.nextDouble();
            }
            
            // Encontra o maior valor e sua posição
            for (int i = 0; i < qtd; i++)
            {
                if ((i == 0) || (mai < numVet[i]))
                {
                    mai = numVet[i]; // Atualiza maior valor
                    idMai = i; // Atualiza posição
                }
            }

            // Exibe resultados
            System.out.format("\n# MAIOR VALOR = %.2f", mai);
            System.out.format("\n# POSICAO DO MAIOR VALOR = %d\n", idMai);
        }
    }
}
