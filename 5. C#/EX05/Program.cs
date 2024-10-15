using System;
using System.Globalization;

namespace EX05
{
    class EX05
    {
        static void Main(String[] args)
        {
            int qtd; // Quantidade comprada
            double pre, din, trc; // Preço, dinheiro recebido e troco

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("# Preco unitario do produto: ");
            pre = double.Parse(Console.ReadLine(), ci); // Lê preço unitário

            Console.Write("# Quantidade comprada: ");
            qtd = int.Parse(Console.ReadLine()); // Lê quantidade comprada

            Console.Write("# Dinheiro recebido: ");
            din = double.Parse(Console.ReadLine(), ci); // Lê dinheiro recebido

            trc = din - pre * qtd; // Calcula troco

            Console.WriteLine("# Troco: " + trc.ToString("F2", ci)); // Exibe troco
        }
    }
}
