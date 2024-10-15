using System;

namespace EX34
{
    class EX34
    {
        // Função principal do programa
        static void Main(String[] args)
        {
            int x;

            // Solicita ao usuário o valor de X
            Console.Write("# Digite o valor de X: ");
            x = int.Parse(Console.ReadLine());

            // Loop para iterar de 0 até o valor de X
            for (int i = 0; i < x; i++)
            {
                // Verifica se o número é ímpar
                if (i % 2 != 0)

                    // Exibe o valor ímpar
                    Console.WriteLine($"# X: {i}");
            }
        }
    }
}
