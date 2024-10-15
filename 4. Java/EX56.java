package Apostila;

import java.util.Scanner;

public class EX56
{
    public static void main(String[] args)
    {
        int idAux = 0, m, n; // Variáveis auxiliares
        
        // Entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita linhas e colunas
            System.out.print("# Qual a quantidade de linhas da matriz: ");
            m = ent.nextInt();
            
            System.out.print("# Qual a quantidade de colunas da matriz: ");
            n = ent.nextInt();
            
            int [][] mat = new int [m][n];  // Matriz
            int [] aux = new int [m];       // Valores negativos
            
            // Preenche matriz e guarda negativos
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    System.out.printf("# Elemento [%d, %d]: ", i, j);
                    mat[i][j] = ent.nextInt();
                    
                    if (mat[i][j] < 0)
                    {
                        aux[idAux] = mat[i][j];
                        idAux++;
                    }
                }
            }
            
            // Exibe negativos
            System.out.println("\n# VALORES NEGATIVOS:");
            for (int i = 0; i < idAux; i++)
            {
                System.out.println("# " + aux[i]);
            }
        }
    }
}
