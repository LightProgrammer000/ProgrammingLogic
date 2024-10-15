using System;
using System.Globalization;

namespace EX18
{
    class EX18
    {
        static void Main(String[] args)
        {
            // Declara variáveis
            char opc;
            double fah, cel;

            // Cultura para formatação
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita escala de temperatura
            Console.Write("# Voce vai digitar a temperatura em qual escala (C/F): ");
            opc = Console.ReadLine().ToUpper()[0];

            // Se for Fahrenheit
            if (opc == 'F')
            {
                try
                {
                    // Lê temperatura em Fahrenheit
                    Console.Write("# Digite a temperatura em Fahrenheit: ");
                    fah = double.Parse(Console.ReadLine(), ci);

                    // Converte para Celsius
                    cel = (5.0 / 9) * (fah - 32);
                    // Exibe Celsius
                    Console.WriteLine($"# Temperatura equivalente em Celsius: {cel.ToString("F2", ci)}");
                }

                catch
                {
                    Console.WriteLine("# Erro!");
                }
            }

            // Se for Celsius
            else if (opc == 'C')
            {
                try
                {
                    // Lê temperatura em Celsius
                    Console.Write("# Digite a temperatura em Celsius: ");
                    cel = double.Parse(Console.ReadLine(), ci);

                    // Converte para Fahrenheit
                    fah = (9 * cel) / 5 + 32;
                    // Exibe Fahrenheit
                    Console.WriteLine($"# Temperatura equivalente em Fahrenheit: {fah.ToString("F2", ci)}");
                }

                catch
                {
                    Console.WriteLine("# Erro!");
                }
            }

            // Opção inválida
            else
            {
                Console.WriteLine("# Opcao invalida!");
            }
        }
    }
}
