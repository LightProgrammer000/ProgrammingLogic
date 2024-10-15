using System;

namespace EX10
{
    class EX10
    {
        static void Main(String[] args)
        {
            // Declara variáveis para segundos, minutos e horas
            int seg, min, hor;

            // Solicita e lê a duração em segundos
            Console.Write("# Digite a duracao em segundos: ");
            seg = int.Parse(Console.ReadLine());

            // Converte segundos em minutos
            min = seg / 60;
            
            // Atualiza segundos restantes
            seg = seg % 60;

            // Converte minutos em horas
            hor = min / 60;
            
            // Atualiza minutos restantes
            min = min % 60;

            // Exibe o tempo formatado como HH:MM:SS
            Console.WriteLine($"{hor:D2}:{min:D2}:{seg:D2}");
        }
    }
}
