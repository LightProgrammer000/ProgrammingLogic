using System;
using System.Globalization;

namespace EX03
{
    class EX03
    {
        static void Main(String[] args)
        {
            string nom1, nom2; // Nomes
            int ida1, ida2; // Idades
            double med; // Média

            CultureInfo ci = CultureInfo.InvariantCulture; // Cultura

            Console.WriteLine("# Dados da primeira pessoa: ");
            
            Console.Write("# Nome: ");
            nom1 = Console.ReadLine(); // Lê nome
            
            Console.Write("# Idade: ");
            ida1 = int.Parse(Console.ReadLine()); // Lê idade

            Console.WriteLine("# Dados da segunda pessoa: ");
            
            Console.Write("# Nome: ");
            nom2 = Console.ReadLine(); // Lê nome
            
            Console.Write("# Idade: ");
            ida2 = int.Parse(Console.ReadLine()); // Lê idade

            med = (double)(ida1 + ida2) / 2; // Calcula média

            // Exibe resultado
            Console.WriteLine("# A idade media de " + nom1 + " e " + nom2 + " = " + med.ToString("F1", ci) + " anos");
        }
    }
}
