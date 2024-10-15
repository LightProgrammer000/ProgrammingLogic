using System;
using System.Globalization;

namespace EX11
{
    class EX11
    {
        static void Main(String[] args)
        {
            // Declara variáveis para as notas e a soma
            double n1, n2, som;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê a primeira nota
            Console.Write("# Digite a primeira nota: ");
            n1 = double.Parse(Console.ReadLine(), ci);

            // Solicita e lê a segunda nota
            Console.Write("# Digite a segunda nota: ");
            n2 = double.Parse(Console.ReadLine(), ci);

            // Calcula a soma das notas
            som = n1 + n2;

            // Exibe a nota final formatada
            Console.WriteLine($"* Nota Final: {som.ToString("F2", ci)}");

            // Verifica se a nota final é menor que 60
            if (som < 60)
            {
                // Exibe mensagem de reprovação
                Console.WriteLine("# Reprovado");
            }
        }
    }
}
