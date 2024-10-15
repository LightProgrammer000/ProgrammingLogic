using System;

namespace EX35
{
    class EX35
    {
        static void Main(String[] args)
        {
            int n, qtd;

            // Recebe a quantidade de números
            Console.Write("# Quantos numeros voce vai digitar: ");
            qtd = int.Parse(Console.ReadLine());

            // Loop para ler os números
            for (int i = 0; i < qtd; i++)
            {
                // Recebe um número
                Console.Write("\n# Digite um numero: ");
                n = int.Parse(Console.ReadLine());

                // Verifica se é positivo
                if (n > 0)
                {
                    string resp = (n % 2 == 0) ? "# PAR POSITIVO" : "# IMPAR POSITIVO";
                    Console.WriteLine(resp);
                }

                // Verifica se é negativo
                else if (n < 0)
                {
                    string resp = (n % 2 == 0) ? "# PAR NEGATIVO" : "# IMPAR NEGATIVO";
                    Console.WriteLine(resp);
                }

                // Número nulo
                else
                {
                    Console.WriteLine("# NULO");
                }
            }
        }
    }
}
