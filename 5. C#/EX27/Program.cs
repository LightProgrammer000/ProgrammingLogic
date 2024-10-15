using System;

namespace EX27
{
    class EX27
    {
        static void Main(String[] args)
        {
            // Declaração das variáveis inteiras x e y
            int x, y;

            // Solicita ao usuário os valores das coordenadas X e Y
            Console.WriteLine("# Digite os valores das coordenadas X e Y:");

            // Entrada do valor de X
            Console.Write("# X: ");
            x = int.Parse(Console.ReadLine());

            // Entrada do valor de Y
            Console.Write("# Y: ");
            y = int.Parse(Console.ReadLine());

            // Loop enquanto as coordenadas X e Y forem diferentes de 0
            while ((x != 0) && (y != 0))
            {
                // Verifica se está no primeiro quadrante
                if (x > 0 && y > 0)
                    Console.WriteLine("* QUADRANTE Q1");

                // Verifica se está no quarto quadrante
                else if (x > 0 && y < 0)
                    Console.WriteLine("* QUADRANTE Q4");

                // Verifica se está no terceiro quadrante
                else if (x < 0 && y < 0)
                    Console.WriteLine("* QUADRANTE Q3");

                // Verifica se está no segundo quadrante
                else if (x < 0 && y > 0)
                    Console.WriteLine("* QUADRANTE Q2");

                // Solicita nova entrada para X e Y
                Console.WriteLine("\n# Digite os valores das coordenadas X e Y: ");

                // Entrada do valor de X
                Console.Write("# X: ");
                x = int.Parse(Console.ReadLine());

                // Entrada do valor de Y
                Console.Write("# Y: ");
                y = int.Parse(Console.ReadLine());
            }
        }
    }
}