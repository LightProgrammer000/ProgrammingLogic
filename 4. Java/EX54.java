package Apostila;

import java.util.Scanner;

public class EX54 
{
    public static void main(String[] args) 
    {
        int qtd, qtdNeg = 0, idAux = 0; 
        
        // Inicializa o Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita a ordem da matriz
            System.out.print("# Qual a ordem da matriz: ");
            qtd = ent.nextInt();
            
            // Declara matriz quadrada e array para a diagonal
            int [][] mat = new int[qtd][qtd]; 
            int [] aux = new int[qtd]; 
            
            // Preenche a matriz e conta elementos negativos
            for (int i = 0; i < qtd; i++)
            {
                for (int j = 0; j < qtd; j++)
                {
                    // Solicita elemento da matriz
                    System.out.format("# Elemento [%d, %d]: ", i, j);
                    mat[i][j] = ent.nextInt();
                    
                    // Conta elementos negativos
                    if (mat[i][j] < 0)
                    {
                        qtdNeg++;
                    }
                    
                    // Armazena elementos da diagonal principal
                    if (i == j)
                    {
                        aux[idAux] = mat[i][j];
                        idAux++;
                    }
                }
            }
            
            // Exibe a diagonal principal
            System.out.println("\n# DIAGONAL PRINCIPAL:");
            for (int i = 0; i < qtd; i++)
            {
                System.out.print(" " + aux[i]); // Imprime diagonal
            }
            
            // Exibe a quantidade de negativos
            System.out.println("\n\n# QUANTIDADE DE NEGATIVOS = " + qtdNeg);
        }
    }
}
