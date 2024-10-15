package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX26
{
    public static void main(String[] args)
    {
        int pass; // Senha
        
        // Formatação numérica
        Locale.setDefault(Locale.US); 
        
        // Inicializa o Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            // Solicita a senha
            System.out.print("# Digite a senha: ");
            pass = ent.nextInt(); // Lê senha
            
            // Valida a senha
            while (pass != 2002)
            {
                // Mensagem de erro
                System.out.print("# Senha invalida! Tente novamente: ");
                pass = ent.nextInt(); // Lê nova senha
            }
        }
        
        // Acesso permitido
        System.out.println("# Acesso permitido!"); 
    }
}
