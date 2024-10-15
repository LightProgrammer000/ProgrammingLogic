using System;

namespace EX24
{
    class EX24
    {
        static void Main(String[] args)
        {
            int x, y;

            // Solicita dois números
            Console.WriteLine("# Digite dois numeros: ");

            Console.Write("# X: ");
            x = int.Parse(Console.ReadLine());

            Console.Write("# Y: ");
            y = int.Parse(Console.ReadLine());

            // Loop até que os números sejam iguais
            while (x != y)
            {
                // Verifica se é crescente ou decrescente
                if (x > y)
                    Console.WriteLine("# DECRESCENTE!");
                else
                    Console.WriteLine("# CRESCENTE!");

                // Solicita outros números
                Console.WriteLine("\n# Digite outros dois numeros: ");

                Console.Write("# X: ");
                x = int.Parse(Console.ReadLine());

                Console.Write("# Y: ");
                y = int.Parse(Console.ReadLine());
            }
        }
    }
}
