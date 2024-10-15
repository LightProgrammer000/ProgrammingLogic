using System;
using System.Globalization;

namespace EX28
{
    class EX28
    {
        static void Main(String[] args)
        {
            // Declaração de variável para a nota e soma
            double n, som = 0;

            // Define o uso de cultura invariável para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita a primeira nota
            Console.Write("# Digite a primeira nota: ");
            n = double.Parse(Console.ReadLine(), ci);

            // Valida se a nota está entre 0 e 10
            while ((n < 0) || (n > 10))
            {
                // Mensagem de valor inválido
                Console.Write("# Valor invalido! Tente novamente: ");
                n = double.Parse(Console.ReadLine(), ci);
            }

            // Soma a primeira nota
            som += n;

            // Solicita a segunda nota
            Console.Write("# Digite a segunda nota: ");
            n = double.Parse(Console.ReadLine(), ci);

            // Valida se a nota está entre 0 e 10
            while ((n < 0) || (n > 10))
            {
                // Mensagem de valor inválido
                Console.Write("# Valor invalido! Tente novamente: ");
                n = double.Parse(Console.ReadLine(), ci);
            }

            // Soma a segunda nota
            som += n;

            // Calcula e exibe a média das notas
            Console.WriteLine($"# Media: {(som / 2).ToString("F2", ci)}");
        }
    }
}
