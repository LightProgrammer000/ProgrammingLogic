using System;
using System.Globalization;

namespace EX25
{
    class EX25
    {
        static void Main(String[] args)
        {
            int i = 0, ida, som = 0;
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita idades
            Console.WriteLine("# Digite as idades: ");

            // Loop até entrada negativa
            while (true)
            {
                Console.Write("# Idade: ");
                ida = int.Parse(Console.ReadLine());

                if (ida < 0)
                {
                    break; // Sai do loop se idade negativa
                }

                som += ida; // Soma idades
                i++;        // Conta entradas válidas
            }

            // Calcula e exibe a média ou mensagem de erro
            if (i > 0)
                Console.WriteLine($"# Media: {((double)som / i).ToString("F2", ci)}");
            else
                Console.WriteLine("# IMPOSSIVEL CALCULAR");
        }
    }
}
