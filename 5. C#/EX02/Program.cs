using System;
using System.Globalization;
using static System.Math;

namespace EX02
{
    class EX02
    {
        // Início do programa
        static void Main(String[] args)
        {
            double bas, alt, are, per, dia; // Variáveis

            CultureInfo ci = CultureInfo.InvariantCulture; // Cultura

            // Lê base e altura
            Console.Write("# Base do retangulo: ");
            bas = double.Parse(Console.ReadLine(), ci);

            Console.Write("# Altura do retangulo: ");
            alt = double.Parse(Console.ReadLine(), ci);

            // Cálculos
            are = bas * alt;
            per = 2 * (bas + alt);
            dia = Sqrt(Pow(bas, 2) + Pow(alt, 2));

            // Resultados
            Console.WriteLine("# Area: " + are.ToString("F4", ci));
            Console.WriteLine("# Perimetro: " + per.ToString("F4", ci));
            Console.WriteLine("# Diagonal: " + dia.ToString("F4", ci));
        }
    }
}
