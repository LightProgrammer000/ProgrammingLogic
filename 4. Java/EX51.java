package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX51
{
    public static void main(String[] args)
    {
        int qtd;
        double not1, not2;

        Locale.setDefault(Locale.US);

        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Quantos alunos serao digitados: ");
            qtd = ent.nextInt();
            ent.nextLine();
            
            double[] vetMed = new double[qtd];
            String[] vetNom = new String[qtd];

            // Lê os dados dos alunos
            for (int i = 0; i < qtd; i++)
            {
                System.out.print("\n# Digite nome: ");
                vetNom[i] = ent.nextLine();
                
                System.out.printf("# Digite 1a nota do %do aluno: ", i + 1);
                not1 = ent.nextDouble();
                
                System.out.printf("# Digite 2a nota do %do aluno: ", i + 1);
                not2 = ent.nextDouble();
                
                ent.nextLine();
                vetMed[i] = (not1 + not2) / 2; // Calcula a média
            }
            
            // Exibe alunos aprovados
            System.out.println("\n* Alunos aprovados:");
            for (int i = 0; i < qtd; i++)
            {
                if (vetMed[i] >= 6)
                {
                    System.out.println(vetNom[i]);
                }
            }
        }
    }
}
