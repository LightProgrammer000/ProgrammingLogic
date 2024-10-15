using System;
using System.Globalization;
using static System.Math;

namespace EX06
{
    class EX06
    {
        static void Main(String[] args)
        {
            double r, are; // Raio e área

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê o raio
            Console.Write("# Digite o valor do raio do circulo: ");
            r = double.Parse(Console.ReadLine(), ci);

            // Calcula a área
            are = PI * Pow(r, 2);

            // Exibe a área
            Console.WriteLine("# Area: " + are.ToString("F3", ci));
        }
    }
}
