package Apostila;

import java.util.Scanner;           // Para entrada de dados
import java.util.Locale;            // Para formatação de número
import static java.lang.Math.pow;   // Para potenciação

public class EX60
{
    public static void main(String[] args) 
    {
        // Variáveis para a matriz e soma
        int n, qtd, idAux = 0; 
        double acuSomPos = 0; 
        
        // Define o locale para formatação de números
        Locale.setDefault(Locale.US); 
        
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Qual a ordem da matriz: ");
            
            // Lê a ordem da matriz
            qtd = ent.nextInt(); 
            
            // Array para armazenar elementos da diagonal principal
            double aux[] = new double[qtd]; 
            
            // Matriz original
            double mat[][] = new double[qtd][qtd]; 
            
            // Matriz alterada
            double matAlt[][] = new double[qtd][qtd]; 
            
            // Loop para preencher a matriz
            for (int i = 0; i < qtd; i++)
            {
                for (int j = 0; j < qtd; j++)
                {
                    System.out.printf("# Elemento [%d, %d]: ", i, j);
                    // Lê o elemento na posição [i, j]
                    mat[i][j] = ent.nextDouble(); 
                    
                    // Acumula a soma dos elementos positivos
                    if (mat[i][j] > 0)
                        acuSomPos += mat[i][j]; 
                    
                    // Calcula o quadrado dos elementos negativos
                    if (mat[i][j] < 0)
                        matAlt[i][j] = pow(mat[i][j], 2); 
                    else
                        matAlt[i][j] = mat[i][j]; // Mantém o valor
                    
                    // Armazena elementos da diagonal principal
                    if (i == j)
                    {
                        aux[idAux] = mat[i][j]; 
                        idAux++;
                    }
                }
            }
            
            // Exibe a soma dos elementos positivos
            System.out.printf("\n# SOMA DOS POSITIVOS: %.2f", acuSomPos); 
            
            System.out.print("\n\n# Escolha uma linha: ");
            // Lê uma linha para exibir
            n = ent.nextInt(); 
            
            System.out.print("# LINHA ESCOLHIDA: ");
            for (int j = 0; j < qtd; j++)
            {
                // Exibe a linha escolhida
                System.out.printf("%.1f ", mat[n][j]); 
            }
            
            System.out.print("\n\n# Escolha uma coluna: ");
            // Lê uma coluna para exibir
            n = ent.nextInt(); 
            
            System.out.print("# COLUNA ESCOLHIDA: ");
            for (int i = 0; i < qtd; i++)
            {
                // Exibe a coluna escolhida
                System.out.printf("%.1f ", mat[i][n]); 
            }
            
            // Exibe os elementos da diagonal principal
            System.out.print("\n\n# DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < idAux; i++)
            {
                // Exibe os elementos armazenados na diagonal
                System.out.printf("%.1f ", aux[i]); 
            }
            System.out.println("");
            
            // Exibe a matriz alterada
            System.out.print("\n# MATRIZ ALTERADA:");
            for (int i = 0; i < qtd; i++)
            {
                System.out.println(""); 
                for (int j = 0; j < qtd; j++)
                {
                    // Exibe os elementos da matriz alterada
                    System.out.printf("%.1f ", matAlt[i][j]); 
                }
            }
            System.out.println(""); 
        }
        
    }
}
