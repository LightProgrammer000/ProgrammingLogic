using System;
using System.Globalization;
using static System.Math;

namespace EX09
{
    class EX09
    {
        static void Main(String[] args)
        {
            // Declara variáveis para medidas e áreas
            double a, b, c;
            double areQua, areTri, areTra;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê a medida A
            Console.Write("# Digite a medida A: ");
            a = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a medida B
            Console.Write("# Digite a medida B: ");
            b = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a medida C
            Console.Write("# Digite a medida C: ");
            c = double.Parse(Console.ReadLine(), ci);

            // Calcula a área do quadrado
            areQua = Pow(a, 2);

            // Calcula a área do triângulo
            areTri = (a * b) / 2;

            // Calcula a área do trapézio
            areTra = ((a + b) * c) / 2;

            // Exibe a área do quadrado formatada
            Console.WriteLine("\n* AREA DO QUADRADO = " + areQua.ToString("F4", ci));

            // Exibe a área do triângulo formatada
            Console.WriteLine("* AREA DO TRIANGULO = " + areTri.ToString("F4", ci));
            
            // Exibe a área do trapézio formatada
            Console.WriteLine("* AREA DO TRAPEZIO = " + areTra.ToString("F4", ci));
        }
    }
}
