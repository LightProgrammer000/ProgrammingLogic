using System;
using System.Globalization;

namespace EX21
{
    class EX21
    {
        static void Main(String[] args)
        {
            string per;         // Porcentagem de aumento
            double aum, salAtu; // Aumento e salário atual

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê o salário atual
            Console.Write("# Digite o salario da pessoa: ");
            salAtu = double.Parse(Console.ReadLine(), ci);

            // Define porcentagem e aumento com base no salário
            if (salAtu > 8000)
            {
                per = "5";
                aum = 0.05 * salAtu;
            }

            else if (salAtu > 3000)
            {
                per = "10";
                aum = 0.10 * salAtu;
            }

            else if (salAtu > 1000)
            {
                per = "15";
                aum = 0.15 * salAtu;
            }

            else
            {
                per = "20";
                aum = 0.20 * salAtu;
            }

            // Exibe novos valores
            Console.WriteLine($"# Novo salario: R$ {(salAtu + aum).ToString("F2", ci)}");
            Console.WriteLine($"# Aumento: R$ {aum.ToString("F2", ci)}");
            Console.WriteLine($"# Porcentagem = {per} %");
        }
    }
}
