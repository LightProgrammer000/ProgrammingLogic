package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX55
{
    public static void main(String[] args)
    {
        int m, n;
        double acuSom = 0; // Acumulador de soma
        
        Locale.setDefault(Locale.US); // Define ponto decimal
        // Entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            // Solicita linhas e colunas
            System.out.print("# Qual a quantidade de linhas da matriz: ");
            m = ent.nextInt();
        
            System.out.print("# Qual a quantidade de colunas da matriz: ");
            n = ent.nextInt();
            
            double [][] mat = new double[m][n]; // Matriz
            double [] aux = new double[m];      // Soma das linhas
            
            // Preenche matriz e soma linhas
            for (int i = 0; i < m; i++)
            {
                System.out.printf("\n# Digite os elementos da %da linha: \n", i+1);
                
                for (int j = 0; j < n; j++)
                {
                    // Entrada dos elementos
                    System.out.print("# Elemento: ");
                    mat[i][j] = ent.nextDouble();
                    
                    acuSom += mat[i][j]; // Soma linha
                }
                
                aux[i] = acuSom; // Armazena soma
                acuSom = 0; // Reseta soma
            }
            
            // Exibe vetor com as somas
            System.out.println("\n# Vetor Gerado: ");
            for (int i = 0; i < m; i++)
            {
                System.out.println(aux[i]);
            }
        }
    }
}
