using System;
using System.Globalization;

namespace EX40
{
    class EX40
    {
        static void Main(String[] args)
        {
            char tip;
            int n, qtd, tot = 0;
            int qtdRat = 0, qtdSap = 0, qtdCoe = 0;

            // Configura a cultura para leitura de números
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita a quantidade de casos de teste
            Console.Write("# Quantos casos de teste serao digitados: ");
            n = int.Parse(Console.ReadLine());

            // Verifica se a quantidade de casos é positiva
            if (n > 0)
            {
                // Loop para cada caso de teste
                for (int i = 0; i < n; i++)
                {
                    Console.Write("\n# Quantidade de cobaias: ");
                    qtd = int.Parse(Console.ReadLine());

                    Console.Write("# Tipo de cobaia: ");
                    tip = Console.ReadLine().ToUpper()[0]; // Lê o tipo e converte para maiúsculo

                    // Acumula as quantidades conforme o tipo de cobaia
                    qtdRat += (tip == 'R') ? qtd : 0;
                    qtdSap += (tip == 'S') ? qtd : 0;
                    qtdCoe += (tip == 'C') ? qtd : 0;
                }

                tot += qtdRat + qtdSap + qtdCoe; // Calcula total de cobaias
            }

            else
            {
                Console.WriteLine("# Numeros de casos invalidos !");
            }

            // Verifica se houve entradas válidas para exibir o relatório
            if (tot > 0)
            {
                Console.WriteLine("\n*** RELATORIO FINAL ***");
                Console.WriteLine($"# Total: {tot}");
                Console.WriteLine($"# Total de coelhos: {qtdCoe}");
                Console.WriteLine($"# Total de ratos: {qtdRat}");
                Console.WriteLine($"# Total de sapos: {qtdSap}");

                // Calcula e exibe os percentuais
                Console.WriteLine($"# Percentual de coelhos: {((double)qtdCoe / tot * 100).ToString("F2", ci)}");
                Console.WriteLine($"# Percentual de ratos: {((double)qtdRat / tot * 100).ToString("F2", ci)}");
                Console.WriteLine($"# Percentual de sapos: {((double)qtdSap / tot * 100).ToString("F2", ci)}");
            }

            else
            {
                Console.WriteLine("# Quantidade invalida !");
            }
        }
    }
}
