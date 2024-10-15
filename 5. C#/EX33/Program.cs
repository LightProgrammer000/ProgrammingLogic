using System;

namespace EX08
{
    class EX08
    {
        // Função principal do programa
        static void Main(String[] args)
        {
            int aux, som = 0, n1, n2;

            // Solicita ao usuário dois números
            Console.WriteLine("# Digite dois numeros: \n");

            // Recebe o valor de N1
            Console.Write("# Digite N1: ");
            n1 = int.Parse(Console.ReadLine());

            // Recebe o valor de N2
            Console.Write("# Digite N2: ");
            n2 = int.Parse(Console.ReadLine());

            // Verifica se N1 é maior que N2 e faz a troca se necessário
            if (n1 > n2)
            {
                aux = n2;
                n2 = n1;
                n1 = aux;
            }

            // Loop para somar os números ímpares entre N1 e N2
            for (int i = (n1 + 1); i < n2; i++)
            {
                // Verifica se o número é ímpar
                if (i % 2 != 0)
                {
                    // Soma os números ímpares
                    som += i;
                }
            }

            // Exibe a soma dos números ímpares
            Console.WriteLine($"# Soma dos Impares = {som}");
        }
    }

}
