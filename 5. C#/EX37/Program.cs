using System;
using System.Globalization;

namespace EX37
{
    class EX37
    {
        static void Main(String[] args)
        {
            int qtd;
            double som = 0, n;

            // Configura a cultura para leitura de números
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Recebe a quantidade de casos a serem digitados
            Console.Write("# Quantos casos voce vai digitar: ");
            qtd = int.Parse(Console.ReadLine());

            // Loop para processar cada caso
            for (int i = 0; i < qtd; i++)
            {
                som = 0; // Reinicia a soma para cada caso
                Console.WriteLine("");

                // Loop para ler as 3 notas
                for (int j = 0; j < 3; j++)
                {
                    Console.Write($"# Nota {j + 1}: ");
                    n = double.Parse(Console.ReadLine(), ci);

                    // Aplica pesos às notas
                    som += (j == 0) ? n * 2 : (j == 1) ? n * 3 : n * 5;
                }

                // Calcula e exibe a média
                Console.WriteLine($"# Media = {(som / 10).ToString("F1", ci)}");
            }
        }
    }
}
