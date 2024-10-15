using System;
using System.Globalization;

namespace EX23
{
    class EX23
    {
        static void Main(String[] args)
        {
            double x, y;

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê valores de X e Y
            Console.WriteLine("# Valor de X: ");
            x = double.Parse(Console.ReadLine(), ci);

            Console.WriteLine("# Valor de Y: ");
            y = double.Parse(Console.ReadLine(), ci);

            // Verifica se está na origem ou nos eixos
            if ((x == 0) && (y == 0))
                Console.WriteLine("# Origem");

            else if (x == 0)
                Console.WriteLine("# Eixo Y");

            else if (y == 0)
                Console.WriteLine("# Eixo X");

            // Verifica o quadrante
            else if (x > 0)
                Console.WriteLine(y > 0 ? "Q1" : "Q4");

            else
                Console.WriteLine(y > 0 ? "Q2" : "Q3");
        }
    }
}
