using System;

namespace EX39
{
    class EX39
    {
        static void Main (String[] args)
        {            
            Console.Write("# Digite o valor de N: ");
            int n = int.Parse(Console.ReadLine());

            if (n <= 15)
                Console.WriteLine($"# Fatorial = {Fatorial(n)}");
            else
                Console.WriteLine("# Digite valores abaixo de 15");
        }

        private static int Fatorial(int n)
        {
            int fat = 1;

            for (int i = 1; i <= n; i++) {fat *= i;};
            
            return fat;
        }
    }
}