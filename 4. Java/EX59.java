package Apostila;

import java.util.Scanner;

public class EX59 
{
    public static void main(String[] args) 
    {
        // Variável para armazenar a ordem da matriz e soma acumulada
        int qtd, acuSom = 0;
        
        // Inicializa o Scanner para entrada de dados
        Scanner ent = new Scanner(System.in);
        
        // Solicita ao usuário a ordem da matriz
        System.out.print("# Qual a ordem da matriz: ");
        qtd = ent.nextInt();
        
        // Declara a matriz quadrada de dimensão qtd x qtd
        int mat[][] = new int [qtd][qtd];
        
        // Loop para percorrer as linhas da matriz
        for (int i = 0; i < qtd; i++)
        {
            // Loop para percorrer as colunas da matriz
            for (int j = 0; j < qtd; j++)
            {
                // Solicita e lê o elemento na posição [i, j]
                System.out.printf("# Elemento [%d, %d]: ", i, j);
                mat[i][j] = ent.nextInt();
                
                // Acumula a soma dos elementos acima da diagonal principal
                if (i < j)
                {
                    acuSom += mat[i][j];                    
                }
            }
        }
        
        // Exibe a soma dos elementos acima da diagonal principal
        System.out.printf("\n# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", acuSom);
    }   
}
