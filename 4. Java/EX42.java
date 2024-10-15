package Apostila;

import java.util.Scanner;

public class EX42
{
    public static void main(String[] args) 
    {
        // Variável para quantidade de números a serem digitados
        int n;
        
        // Inicializa o Scanner para entrada de dados
        Scanner ent = new Scanner(System.in);
                
        // Solicita a quantidade de números
        System.out.print("# Quantos numeros voce vai digitar: ");
        n = ent.nextInt();
        
        // Declara o vetor com tamanho n
        int vet[] = new int[n];
        
        // Garante que n não seja maior que 10
        while (n > 10) 
        {
            System.out.println("# Maximo ate 10 numeros");
            
            // Solicita novamente a quantidade de números
            System.out.print("# Quantos numeros voce vai digitar: ");
            n = ent.nextInt();
        }
        
        // Recebe os números digitados
        for (int i = 0; i < n; i++)
        {
            System.out.print("# Digite um numero: ");
            vet[i] = ent.nextInt();
        }
        
        // Exibe os números negativos
        System.out.println("\n# Numeros negativos");
        
        for (int i = 0; i < n; i++)
        {
            // Verifica e exibe os números negativos
            if (vet[i] < 0)
            {
                System.out.println("* " + vet[i]);                
            }
        }        
    }
}
