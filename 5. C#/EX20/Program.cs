using System;
using System.Globalization;

namespace EX20
{
    class EX20
    {
        static void Main(String[] args)
        {
            int n1, n2, aux;

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê dois números inteiros
            Console.WriteLine("# Digite dois numeros inteiros");

            Console.Write("# N1: ");
            n1 = int.Parse(Console.ReadLine());

            Console.Write("# N2: ");
            n2 = int.Parse(Console.ReadLine());

            // Garante que n1 seja o maior
            if (n1 < n2)
            {
                aux = n2;
                n2 = n1;
                n1 = aux;
            }

            // Exibe se são múltiplos
            Console.WriteLine(report(n1, n2));
        }

        // Verifica se n1 é múltiplo de n2
        private static string report(int n1, int n2)
        {
            return (n1 % n2 == 0) ? "# Sao multiplos" : "# Nao sao multiplos";
        }
    }
}