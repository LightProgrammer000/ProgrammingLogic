package Apostila;

import java.util.Scanner;

public class EX58 
{
    public static void main(String[] args) 
    {
        // Declara variáveis para o número de linhas e colunas
        int m, n;

        // Usa try-with-resources para garantir que o Scanner será fechado
        try (Scanner ent = new Scanner(System.in)) 
        {
            // Solicita ao usuário o número de linhas da matriz
            System.out.print("# Quantas linhas vai ter cada matriz: ");
            m = protecao(ent);
            
            // Solicita ao usuário o número de colunas da matriz
            System.out.print("# Quantas colunas vai ter cada matriz: ");
            n = protecao(ent);
            
            // Declara matrizes A e B com tamanho m x n
            int [][] matA = new int[m][n];
            int [][] matB = new int[m][n];
            
            // Solicita os valores da matriz A
            System.out.println("\n# Digite os valores da matriz A: ");
            matA = popularMatriz(matA, ent);

            // Solicita os valores da matriz B
            System.out.println("\n# Digite os valores da matriz B: ");
            matB = popularMatriz(matB, ent);
            
            // Chama a função para somar as matrizes
            somaMatriz(matA, matB, m, n);
        }
    }
    
    // Função para proteger a entrada de dados
    private static int protecao(Scanner ent) 
    {
        // Variável para armazenar o valor lido
        int a = 0;
       
        // Loop para garantir que a entrada seja um número inteiro
        while (true) 
        {
            try
            {
                // Lê o valor inteiro
                a = ent.nextInt();
                break;
            } 

            catch (Exception e) 
            {
                // Solicita nova entrada em caso de erro
                System.out.print("# Digite numero inteiro: ");
                ent.nextLine(); // Limpa o buffer
            }
        }

        return a; // Retorna o valor lido
    }

    // Função para popular a matriz com valores do usuário
    private static int[][] popularMatriz(int mat[][], Scanner ent)
    {
        // Laço para percorrer as linhas da matriz
        for (int i = 0; i < mat.length; i++) 
        {
            // Laço para percorrer as colunas da matriz
            for (int j = 0; j < mat[i].length; j++)
            {
                // Solicita e lê o elemento na posição [i, j]
                System.out.printf("# Elemento [%d, %d]: ", i, j);
                
                // Verifica se a entrada é um inteiro
                while (!ent.hasNextInt())
                {
                    System.out.println("Entrada invalida. Tente novamente.");
                    ent.next(); // Descarte a entrada inválida
                }

                mat[i][j] = ent.nextInt(); // Armazena o valor lido
            }
        }

        return mat; // Retorna a matriz populada
    }
    
    // Função para somar duas matrizes
    private static void somaMatriz(int [][] mat1, int [][] mat2, int m, int n)
    {
        // Declara a matriz para armazenar a soma
        int [][] matC = new int[m][n];
        
        // Exibe o cabeçalho da matriz soma
        System.out.println("\n# MATRIZ SOMA:");
        
        // Laço para percorrer as linhas da matriz de soma
        for (int i = 0; i < matC.length; i++)
        {                    
            // Laço para percorrer as colunas da matriz de soma
            for (int j = 0; j < matC[i].length; j++)
            {
                // Calcula a soma dos elementos correspondentes
                matC[i][j] = mat1[i][j] + mat2[i][j];
                
                // Exibe o elemento somado
                System.out.print(matC[i][j] + " ");
            }

            // Nova linha após cada linha da matriz soma
            System.out.println(); // Formata a saída
        }
        
        // Linha em branco após a exibição da matriz soma
        System.out.println("");
    }
}