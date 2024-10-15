package Apostila;

import java.util.Scanner;

public class EX30
{
    public static void main(String[] args) 
    {
        // Inicializa variáveis e contadores
        int cod = 0, alc = 0, gas = 0, die = 0;

        // Scanner para entrada de dados
        try (Scanner ent = new Scanner(System.in))
        {
            // Loop até que o código seja 4
            while (cod != 4) 
            {
                // Solicita o código
                System.out.println("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
                cod = ent.nextInt();

                // Processa o código com switch
                switch (cod)
                {
                    case 1:
                        alc++; // Alcool
                        break;

                    case 2:
                        gas++; // Gasolina
                        break;

                    case 3:
                        die++; // Diesel
                        break;

                    case 4:
                        System.out.println("# Encerrando o programa");
                        break;

                    // Mensagem para opções inválidas
                    default:
                        System.out.println("# Opcao invalida!\n");
                }
            }
        }

        // Exibe os totais finais fora do loop
        System.out.println("# MUITO OBRIGADO");
        System.out.println("# Alcool: " + alc);
        System.out.println("# Gasolina: " + gas);
        System.out.println("# Diesel: " + die);
    }
}
