using System;
using System.Globalization;

namespace EX38
{
    class EX38
    {
        static void Main(String[] args)
        {
            int n = 0;
            double num, den;

            // Configura a cultura para leitura de números
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita a quantidade de casos, garantindo que seja positiva
            while (n <= 0)
            {
                Console.Write("# Quantos casos voce vai digitar: ");
                n = int.Parse(Console.ReadLine());
            }

            // Loop para processar cada caso
            for (int i = 0; i < n; i++)
            {
                Console.Write("\n# Entre com o numerador: ");
                num = double.Parse(Console.ReadLine(), ci);

                Console.Write("# Entre com o denominador: ");
                den = double.Parse(Console.ReadLine(), ci);

                // Verifica se o denominador é diferente de zero
                if (den != 0)
                {
                    Console.WriteLine($"* DIVISAO = {(num / den).ToString("F2", ci)}");
                }

                else
                {
                    Console.WriteLine("* DIVISAO IMPOSSIVEL");
                }
            }
        }
    }
}
