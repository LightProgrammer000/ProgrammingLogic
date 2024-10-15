using System;

namespace EX30
{
    class EX30
    {
        static void Main(String[] args)
        {
            // Inicializa contadores para álcool, gasolina, diesel e código de entrada
            int alc = 0, gas = 0, die = 0, cod = 0;

            // Executa o loop até que o código seja 4
            while (cod != 4)
            {
                // Solicita o código do combustível ou 4 para sair
                Console.Write("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
                cod = int.Parse(Console.ReadLine());

                // Verifica o código com a estrutura switch case
                switch (cod)
                {
                    // Incrementa o contador de álcool
                    case 1:
                        alc++;
                        break;

                    // Incrementa o contador de gasolina
                    case 2:
                        gas++;
                        break;

                    // Incrementa o contador de diesel
                    case 3:
                        die++;
                        break;

                    // Finaliza o loop ao receber o código 4
                    case 4:
                        Console.WriteLine("\n# Encerrando o programa");
                        break;

                    // Mensagem de opção inválida
                    default:
                        Console.WriteLine("# Opcao invalida !\n");
                        break;
                }
            }

            // Exibe o relatório final
            Console.WriteLine("\n# MUITO OBRIGADO");
            Console.WriteLine($"# Alcool: {alc}");
            Console.WriteLine($"# Gasolina: {gas}");
            Console.WriteLine($"# Diesel: {die}");
        }
    }
}
