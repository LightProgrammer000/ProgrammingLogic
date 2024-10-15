package Apostila;

import java.util.Scanner;

public class EX50
{
    public static void main(String[] args) 
    {
        String auxNom = null;
        int qtd, mai = 0;

        // Lê a quantidade de pessoas
        try (Scanner ent = new Scanner(System.in)) 
        {
            System.out.print("# Quantas pessoas voce vai digitar: ");
            qtd = ent.nextInt();
            
            String[] vetNom = new String[qtd];
            int[] vetIda = new int[qtd];
            
            // Lê os dados das pessoas
            for (int i = 0; i < qtd; i++)
            {
                System.out.format("\n# Dados da %da pessoa:\n", i + 1);
                
                System.out.print("# Nome: ");
                vetNom[i] = ent.next();
                ent.nextLine();
                
                System.out.print("# Idade: ");
                vetIda[i] = ent.nextInt();
                
                // Verifica a maior idade
                if ((i == 0) || (mai < vetIda[i]))
                {
                    mai = vetIda[i];
                    auxNom = vetNom[i];
                }
            }
        }

        // Exibe a pessoa mais velha
        System.out.println("\n# PESSOA MAIS VELHA: " + auxNom);
    }
}
