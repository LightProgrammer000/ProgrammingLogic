using System;
using System.Globalization;

namespace EX15
{
    class EX15
    {
        static void Main(String[] args)
        {
            // Declara variáveis para preço, quantidade, dinheiro e total
            double pre, qtd, din, tot;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê o preço unitário do produto
            Console.Write("# Preco unitário do produto: ");
            pre = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a quantidade comprada
            Console.Write("# Quantidade comprada: ");
            qtd = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê o dinheiro recebido
            Console.Write("# Dinheiro recebido: ");
            din = double.Parse(Console.ReadLine(), ci);

            // Calcula o total a ser pago
            tot = pre * qtd;

            // Verifica se o dinheiro recebido é insuficiente
            if (din < tot)
            {
                // Exibe o valor que falta
                Console.WriteLine($"* DINHEIRO INSUFICIENTE. FALTAM R$ {(tot - din).ToString("F2", ci)}");
            }

            else
            {
                // Calcula e exibe o troco
                Console.WriteLine($"* TROCO = R$ {(din - tot).ToString("F2", ci)}");
            }
        }
    }
}
