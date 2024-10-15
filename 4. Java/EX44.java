package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX44
{
    public static void main(String[] args) 
    {
        // Inicializa variáveis
        double acuAlt = 0; // Acumulador de altura
        int qtd, idAux = 0, contIda = 0; // Contadores e índices
        
        // Configura a localidade
        Locale.setDefault(Locale.US);
        
        // Lê a quantidade de pessoas
        try (Scanner ent = new Scanner(System.in))
        {
            // Lê a quantidade de pessoas
            System.out.print("# Quantas pessoas serao digitadas: ");            
            qtd = ent.nextInt();
            
            // Declara vetores para idade, altura e nomes
            int [] vetIda = new int[qtd];
            double [] vetAlt = new double[qtd];
            String [] vetNom = new String[qtd];
            String [] aux = new String[qtd]; // Para armazenar nomes dos menores de 16
            
            // Verifica o limite de pessoas
            while ((qtd < 1) || (qtd > 5))
            {
                System.out.println("# Valor maximo de 5 pessoas");
                System.out.print("# Quantas pessoas serao digitadas: ");
                qtd = ent.nextInt(); // Repete a entrada se fora do limite
            }
            
            // Lê os dados das pessoas
            for (int i = 0; i < qtd; i++)
            {
                System.out.printf("\n# Dados da %da pessoa:\n", i + 1);
                
                System.out.print("# Nome: ");
                vetNom[i] = ent.next();
                ent.nextLine(); // Limpa o buffer
                
                System.out.print("# Idade: ");
                vetIda[i] = ent.nextInt();
                
                System.out.print("# Altura: ");
                vetAlt[i] = ent.nextDouble();
                acuAlt += vetAlt[i]; // Acumula a altura
            }
            
            // Conta menores de 16 anos
            for (int i = 0; i < qtd; i++)
            {
                if (vetIda[i] < 16)
                {
                    contIda++; // Conta os menores de 16
                    aux[idAux] = vetNom[i]; // Armazena o nome
                    idAux++;
                }
            }
            
            // Exibe altura média e percentual de menores de 16
            System.out.printf("\n# Altura media: %.2f", (acuAlt / qtd));
            System.out.printf("\n# Pessoas com menos de 16 anos: %.1f%%\n", ((double) contIda / qtd) * 100);
            
            // Exibe nomes dos menores de 16
            for (int i = 0; i < contIda; i++)
            {
                System.out.println("# " + aux[i]); // Lista os nomes
            }
        }
    }
}
