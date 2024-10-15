using System;
using System.Globalization;

namespace EX01
{
    class EX01
    {
        // Ponto de entrada do programa
        static void Main(String[] args)
        {
            double lar, com, val, are, pre;                 // Variáveis para dimensões, área e preço

            CultureInfo ci = CultureInfo.InvariantCulture; // Configuração de cultura

            // Solicita largura do terreno
            Console.Write("# Digite a largura do terreno: ");
            lar = double.Parse(Console.ReadLine(), ci);

            // Solicita comprimento do terreno
            Console.Write("# Digite o comprimento do terreno: ");
            com = double.Parse(Console.ReadLine(), ci);

            // Solicita valor por metro quadrado
            Console.Write("# Digite o valor do metro quadrado: ");
            val = double.Parse(Console.ReadLine(), ci);

            // Calcula área e preço do terreno
            are = lar * com;
            pre = are * val;

            // Exibe os resultados
            Console.WriteLine("\n# Area do terreno: " + are.ToString("F2", ci));
            Console.WriteLine("# Preco do terreno: " + pre.ToString("F2", ci));
        }
    }
}
