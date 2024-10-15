using System;

namespace EX22
{
    class EX22
    {
        static void Main(String[] args)
        {
            int horIni, horFin, temp;

            // Lê hora inicial
            Console.Write("# Hora inicial: ");
            horIni = int.Parse(Console.ReadLine());

            // Lê hora final
            Console.Write("# Hora final: ");
            horFin = int.Parse(Console.ReadLine());

            // Calcula a duração
            temp = analise(horIni, horFin);

            // Exibe resultado ou erro
            if ((temp >= 1) && (temp <= 24))
            {
                Console.WriteLine($"# O JOGO DUROU {temp} HORA(S)");
            }
            else
            {
                Console.WriteLine("# Tempo invalido !");
            }
        }

        // Função para calcular duração do jogo
        private static int analise(int horIni, int horFin)
        {
            return (horFin > horIni) ? (horFin - horIni) : ((24 + horFin) - horIni);
        }
    }
}
