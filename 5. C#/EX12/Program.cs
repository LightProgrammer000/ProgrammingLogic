using System;
using System.Globalization;
using static System.Math;

namespace EX12
{
    class EX12
    {
        static void Main(String[] args)
        {
            // Declara variáveis para coeficientes e raízes
            double a, b, c, x1, x2, del;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê o coeficiente a
            Console.Write("# Coeficiente a: ");
            a = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê o coeficiente b
            Console.Write("# Coeficiente b: ");
            b = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê o coeficiente c
            Console.Write("# Coeficiente c: ");
            c = double.Parse(Console.ReadLine(), ci);

            // Calcula o discriminante da equação
            del = Pow(b, 2) - 4 * a * c;

            // Verifica se a equação é válida ou se não possui raízes reais
            if ((a == 0) || (del < 0))
                Console.WriteLine("* Esta equacao esta invalidada ou nao possui raizes reais");

            else
            {
                // Calcula as raízes da equação
                x1 = (-b + Sqrt(del)) / (2 * a);
                x2 = (-b - Sqrt(del)) / (2 * a);

                // Exibe as raízes formatadas
                Console.WriteLine($"* X1 = {x1.ToString("F4", ci)}");
                Console.WriteLine($"* X2 = {x2.ToString("F4", ci)}");
            }
        }
    }
}
