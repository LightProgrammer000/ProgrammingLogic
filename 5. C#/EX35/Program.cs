using System;

namespace EX35
{
    class EX35
    {
        static void Main(String[] args)
        {
            int n = 0, qtd, dentro = 0, fora = 0;

            // Recebe a quantidade de números
            Console.Write("# Quantos numeros voce vai digitar: ");
            qtd = int.Parse(Console.ReadLine());

            // Loop para ler os números
            for (int i = 0; i < qtd; i++)
            {
                // Recebe um número
                Console.Write("# Digite um numero: ");
                n = int.Parse(Console.ReadLine());

                // Verifica se está entre 10 e 20
                if (n >= 10 && n <= 20)
                    dentro++;  // Incrementa "dentro"
                else
                    fora++;    // Incrementa "fora"
            }

            // Exibe os resultados
            Console.WriteLine($"\n# {dentro} DENTRO");
            Console.WriteLine($"# {fora} FORA");
        }
    }
}
