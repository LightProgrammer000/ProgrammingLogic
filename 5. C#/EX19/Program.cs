using System;
using System.Globalization;

namespace EX19
{
    class EX19
    {
        static void Main(String[] args)
        {
            int cod, qtd;
            double val;

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê código do produto
            Console.Write("# Codigo do produto comprado: ");
            cod = int.Parse(Console.ReadLine());

            // Lê quantidade comprada
            Console.Write("# Quantidade comprada: ");
            qtd = int.Parse(Console.ReadLine());

            // Define valor com base no código
            if (cod == 1)
                val = 5.00;

            else if (cod == 2)
                val = 3.50;

            else if (cod == 3)
                val = 4.80;

            else if (cod == 4)
                val = 8.90;

            else if (cod == 5)
                val = 7.32;

            else
                val = 0; // Código inválido

            // Exibe valor total a pagar
            Console.WriteLine($"* Valor a pagar: R$ {(val * qtd).ToString("F2", ci)}");
        }
    }
}