using System;

namespace EX08
{
    class EX08
    {
        // Função principal do programa
        static void Main(String[] args)
        {
            int n;

            // Solicita ao usuário um número para calcular a tabuada
            Console.Write("# Deseja a tabuada para qual valor: ");
            n = int.Parse(Console.ReadLine());

            Console.WriteLine("");

            // Laço para calcular e exibir a tabuada do número inserido
            for (int i = 1; i < 11; i++)
            {
                // Exibe o resultado da multiplicação para cada valor de 1 a 10
                Console.WriteLine($"# {n} x {i} = {n * i}");
            }
        }
    }
}
