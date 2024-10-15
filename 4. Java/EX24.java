package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX24
{
    public static void main(String[] args)
    {
        // Inicializa as variáveis X e Y
        int x = 0, y = 0;
        
        // Define o padrão de formatação numérica
        Locale.setDefault(Locale.US);
        
        // Instancia o scanner para entrada de dados
        Scanner ent = new Scanner(System.in);
       
        // Chama a função principal de loop
        loop(x, y, ent);
    }
    
    // Função para ler a entrada de dados
    private static int entradaDados(Scanner ent)
    {
        return ent.nextInt();
    }
    
    // Função para determinar o resultado entre os valores
    private static String resultado(int x, int y)
    {
        return (x > y) ? "# DECRESCENTE" : "# CRESCENTE";
    }    

    // Função de loop para entrada e comparação dos números
    private static void loop(int x, int y, Scanner ent)
    {
        // Controla a primeira execução do loop
        boolean a = Boolean.TRUE;
        
        // Loop até que X e Y sejam iguais
        while (x != y || a)
        {
            // Solicita a entrada de dois números
            System.out.println("# Digite dois numeros: ");
            
            // Lê o valor de X
            System.out.print("# X: ");
            x = entradaDados(ent);
            
            // Lê o valor de Y
            System.out.print("# Y: ");
            y = entradaDados(ent);
            
            // Exibe o resultado da comparação
            System.out.println(resultado(x, y));
            
            // Desativa a condição de primeira execução
            a = Boolean.FALSE;
        }
    }
}
