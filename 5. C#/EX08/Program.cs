using System;
using System.Globalization;

namespace EX08
{
    class EX08
    {
        static void Main(String[] args)
        {
            int dist; // Distância percorrida
            double comGas, conMed; // Combustível gasto e consumo médio

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê a distância percorrida
            Console.Write("# Distancia percorrida: ");
            dist = int.Parse(Console.ReadLine());

            // Lê o combustível gasto
            Console.Write("# Combustivel gasto: ");
            comGas = double.Parse(Console.ReadLine(), ci);

            // Calcula o consumo médio
            conMed = dist / comGas;

            // Exibe o consumo médio
            Console.WriteLine("# Consumo medio = " + conMed.ToString("F3", ci));
        }
    }
}
