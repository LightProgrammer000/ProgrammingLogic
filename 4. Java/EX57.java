package Apostila;

import java.util.Scanner;

public class EX57
{
    public static void main(String[] args) 
    {
        // Declara a variável para armazenar o tamanho da matriz
        int n;
        
        // Cria um objeto Scanner para ler a entrada do usuário
        Scanner ent = new Scanner(System.in);
        
        // Solicita ao usuário a ordem da matriz
        System.out.print("# Qual a ordem da matriz: ");
        
        // Lê o valor de 'n' (ordem da matriz)
        n = ent.nextInt();
        
        // Vetor auxiliar para armazenar o maior elemento de cada linha
        int [] aux = new int[n];
        
        // Declara uma matriz quadrada de ordem 'n'
        int [][] mat = new int[n][n];
        
        // Laço externo percorre as linhas da matriz
        for (int i = 0; i < mat.length ; i++)
        {
            // Laço interno percorre as colunas da matriz
            for (int j = 0; j < mat[i].length; j++)
            {
                // Solicita e lê o elemento na posição [i, j]
                System.out.printf("# Elemento [%d, %d]: ", i, j);
                mat[i][j] = ent.nextInt();
                
                // Atualiza o maior elemento da linha
                if ((j == 0) || (aux[i] < mat[i][j]))
                {
                    aux[i] = mat[i][j];
                }
            }                        
        }

        // Exibe o maior elemento de cada linha
        System.out.println("\n# MAIOR ELEMENTO DE CADA LINHA: ");
        for (int i = 0; i < n; i++)
        {
            // Exibe o maior valor da linha 'i'
            System.out.printf("# Linha %d: %d\n", i+1, aux[i]);
        }               
    }
}
