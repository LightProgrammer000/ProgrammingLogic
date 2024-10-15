using System;

namespace EX04
{
    class EX04
    {
        static void Main(String[] args)
        {
            int x, y, som; // Declara variáveis

            Console.Write("# Digite o valor de X: ");
            x = int.Parse(Console.ReadLine()); // Lê valor de X

            Console.Write("# Digite o valor de Y: ");
            y = int.Parse(Console.ReadLine()); // Lê valor de Y

            som = x + y; // Calcula soma

            Console.WriteLine("# Soma = " + som); // Exibe resultado
        }
    }
}
