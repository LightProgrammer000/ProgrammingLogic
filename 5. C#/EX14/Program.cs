using System;
using System.Globalization;

namespace EX04
{
    class EX04
    {
        static void Main(String[] args)
        {
            // Declara variáveis para minutos e valor a pagar
            int min, pag = 50; // Valor inicial da fatura é R$ 50

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê a quantidade de minutos utilizados
            Console.Write("# Digite a quantidade de minutos: ");
            min = int.Parse(Console.ReadLine());

            // Calcula o valor adicional se ultrapassar 100 minutos
            pag = (min > 100) ? pag + (min - 100) * 2 : pag;

            // Exibe o valor total a pagar formatado
            Console.WriteLine($"* Valor a pagar: R$ {((double)pag).ToString("F2", ci)}");
        }
    }
}
