// Declaração de namespace e classe
using System;

namespace EX01
{
    class EX01
    {
        static void Main(String[] args)
        {
            // Declaração da variável para quantidade de números
            int n;

            // Solicita ao usuário a quantidade de números a serem digitados
            Console.Write("# Quantos numeros voce vai digitar: ");
            n = int.Parse(Console.ReadLine());

            // Verifica se a quantidade de números é maior que 10
            while (n > 10)
            {
                Console.WriteLine("# Maximo ate 10 numeros");

                // Solicita nova quantidade se o valor for inválido
                Console.Write("\n# Quantos numeros voce vai digitar: ");
                n = int.Parse(Console.ReadLine());
            }

            // Declaração do vetor com o tamanho da quantidade de números
            int[] vet = new int[n];

            // Loop para entrada dos números
            for (int i = 0; i < n; i++)
            {
                Console.Write("# Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            // Exibe mensagem de números negativos
            Console.WriteLine("\n# Numeros negativos:");

            // Loop para verificar e exibir números negativos
            for (int i = 0; i < n; i++)
            {
                if (vet[i] < 0)
                {
                    Console.WriteLine($"* {vet[i]}");
                }
            }
        }
    }
}
