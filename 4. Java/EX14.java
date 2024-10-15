package Apostila;

import java.util.Locale;
import java.util.Scanner;

public class EX14
{
    public static void main(String[] args)
    {
        // Inicializa o valor base da conta
        int pag = 50, min;
        
        // Define a localização
        Locale.setDefault(Locale.US);
        
        // Entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            System.out.print("# Digite a quantidade de minutos: ");
            min = ent.nextInt();
        }
        
        // Calcula o valor adicional se os minutos forem acima de 100
        if (min > 100)
        {
            pag += (min - 100) * 2; // Adiciona R$2 por minuto excedente
        }
        
        // Exibe o valor total a pagar
        System.out.printf("* Valor a pagar: R$ %.2f \n", (double) pag);
    }
}