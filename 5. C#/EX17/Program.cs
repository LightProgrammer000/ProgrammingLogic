using System;
using System.Globalization;

namespace EX17
{
    class EX17
    {
        static void Main(String[] args)
        {
            // Declara variáveis para armazenar as distâncias
            double mai, d2, d3;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita ao usuário que digite as três distâncias
            Console.WriteLine("# Digite as tres distancias");

            // Solicita e lê a primeira distância
            Console.Write("* D1: ");
            mai = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a segunda distância
            Console.Write("* D2: ");
            d2 = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a terceira distância
            Console.Write("* D3: ");
            d3 = double.Parse(Console.ReadLine(), ci);

            // Atualiza a maior distância se D2 for maior
            mai = (mai < d2) ? d2 : mai;

            // Atualiza a maior distância se D3 for maior
            mai = (mai < d3) ? d3 : mai;

            // Exibe a maior distância formatada
            Console.WriteLine($"* MAIOR DISTANCIA = {mai.ToString("F2", ci)}");
        }
    }
}
