// Declaração de namespace e classe
using System;
using System.Globalization;

namespace EX41
{
    class EX41
    {
        static void Main(String[] args)
        {
            // Declaração de variáveis
            char tip;
            int i = 0, n, qtd, tot = 0;
            int qtdRat = 0, qtdSap = 0, qtdCoe = 0;

            // Definindo cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita a quantidade de casos de teste
            Console.Write("# Quantos casos de teste serao digitados: ");
            n = int.Parse(Console.ReadLine());

            // Verifica se a quantidade de casos é válida
            if (n > 0)
            {
                // Loop para processar os casos de teste
                while (i < n)
                {
                    // Solicita a quantidade de cobaias
                    Console.Write("\n# Quantidade de cobaias: ");
                    qtd = int.Parse(Console.ReadLine());

                    // Solicita o tipo de cobaia
                    Console.Write("# Tipo de cobaia: ");
                    tip = Console.ReadLine().ToUpper()[0];

                    // Atualiza a quantidade conforme o tipo de cobaia
                    switch (tip)
                    {
                        case 'R':
                            qtdRat += qtd;
                            break;

                        case 'S':
                            qtdSap += qtd;
                            break;

                        case 'C':
                            qtdCoe += qtd;
                            break;

                        default:
                            // Trata opção inválida e repete a iteração
                            Console.WriteLine("# Opcao invalida !");
                            i--;
                            break;
                    }

                    // Incrementa o contador
                    i++;
                }

                // Calcula o total de cobaias
                tot += qtdRat + qtdSap + qtdCoe;
            }

            else
            {
                // Exibe mensagem para quantidade de casos inválida
                Console.WriteLine("# Numeros de casos invalidos !");
            }

            // Verifica se houve cobaias e exibe relatório final
            if (tot > 0)
            {
                Console.WriteLine("\n*** RELATORIO FINAL ***");
                Console.WriteLine($"# Total: {tot}");
                Console.WriteLine($"# Total de coelhos: {qtdCoe}");
                Console.WriteLine($"# Total de ratos: {qtdRat}");
                Console.WriteLine($"# Total de sapos: {qtdSap}");

                // Calcula e exibe percentuais de cada tipo de cobaia
                Console.WriteLine($"# Percentual de coelhos: {((double)qtdCoe / tot * 100).ToString("F2", ci)}");
                Console.WriteLine($"# Percentual de ratos: {((double)qtdRat / tot * 100).ToString("F2", ci)}");
                Console.WriteLine($"# Percentual de sapos: {((double)qtdSap / tot * 100).ToString("F2", ci)}");
            }

            else
            {
                // Exibe mensagem para total inválido
                Console.WriteLine("# Quantidade invalida !");
            }
        }
    }
}
