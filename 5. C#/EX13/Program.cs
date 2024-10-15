using System;

namespace EX03
{
    class EX03
    {
        static void Main(String[] args)
        {
            // Declara variáveis para três números e o menor valor
            int n1, n2, n3, men;

            // Solicita e lê o primeiro valor
            Console.Write("# Primeiro valor: ");
            n1 = int.Parse(Console.ReadLine());
            men = n1;  // Inicializa o menor valor com o primeiro número

            // Solicita e lê o segundo valor
            Console.Write("# Segundo valor: ");
            n2 = int.Parse(Console.ReadLine());

            // Solicita e lê o terceiro valor
            Console.Write("# Terceiro valor: ");
            n3 = int.Parse(Console.ReadLine());

            // Verifica se todos os valores são iguais (empate)
            if ((n1 == n2) && (n1 == n3))
            {
                Console.WriteLine($"# Empate: {n1}");
            }

            else
            {
                // Atualiza o menor valor comparando com o segundo número
                men = (men > n2) ? n2 : men;
                
                // Atualiza o menor valor comparando com o terceiro número
                men = (men > n3) ? n3 : men;

                // Exibe o menor valor
                Console.WriteLine($"# Menor: {men}");
            }
        }
    }
}
