package Apostila;

import java.util.Scanner;

public class EX45
{
    public static void main(String[] args)
    {
        // Inicializa variáveis
        int idaAux = 0, qtdPar = 0, qtd; // Contadores para pares e total
        
        // Lê a quantidade de números
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de números
            System.out.print("# Quantos numeros voce vai digitar: ");
            qtd = ent.nextInt();
            
            // Declara vetores para números e pares
            int [] numVet = new int[qtd];
            int [] aux =  new int[qtd];
            
            // Lê os números e verifica se são pares
            for (int i = 0; i < qtd; i++)
            {
                System.out.print("# Digite um numero: ");
                numVet[i] = ent.nextInt();
                
                // Verifica se o número é par
                if (numVet[i] % 2 == 0)
                {
                    aux[idaAux] = numVet[i]; // Armazena par no vetor auxiliar
                    idaAux++; // Incrementa o índice
                    qtdPar++; // Conta os pares
                }
            }
            
            // Exibe números pares, se houver
            if (qtdPar > 0)
            {
                System.out.print("\n# NUMEROS PARES:");                
                // Lista os números pares
                for (int i = 0; i < qtdPar; i++)
                {
                    System.out.print(" " + aux[i]);
                }
            }

            // Exibe quantidade de pares
            System.out.println("\n\n# QUANTIDADE DE PARES = " + qtdPar);
        }
    }
}
