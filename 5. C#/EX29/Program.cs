using System;

namespace EX29
{
    class EX29
    {
        static void Main(String[] args)
        {
            // Inicializa contadores para álcool, gasolina e diesel
            int alc = 0, gas = 0, die = 0, cod = 0;

            // Executa o loop enquanto o código não for 4
            while (cod != 4)
            {
                // Solicita o código do combustível ou 4 para sair
                Console.Write("# Informe um codigo (1, 2, 3) ou 4 para parar: ");
                cod = int.Parse(Console.ReadLine());

                // Incrementa o contador correspondente ao código inserido
                if (cod == 1) alc++;
                else if (cod == 2) gas++;
                else if (cod == 3) die++;
            }

            // Exibe o relatório final
            report(alc, gas, die);
        }

        // Método para exibir o relatório de votos
        private static void report(int alc, int gas, int die)
        {
            Console.WriteLine("\n# MUITO OBRIGADO");
            Console.WriteLine($"# Alcool: {alc}");
            Console.WriteLine($"# Gasolina: {gas}");
            Console.WriteLine($"# Diesel: {die}");
        }
    }
}
