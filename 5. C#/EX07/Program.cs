using System;
using System.Globalization;

namespace EX07
{
    class EX07
    {
        static void Main(String[] args)
        {
            int horTra; // Horas trabalhadas
            string nom; // Nome do trabalhador
            double valHor, pag; // Valor por hora e pagamento total

            CultureInfo ci = CultureInfo.InvariantCulture;

            // Lê o nome
            Console.Write("# Nome: ");
            nom = Console.ReadLine();

            // Lê o valor por hora
            Console.Write("# Valor por hora: ");
            valHor = double.Parse(Console.ReadLine(), ci);

            // Lê as horas trabalhadas
            Console.Write("# Horas trabalhadas: ");
            horTra = int.Parse(Console.ReadLine());

            // Calcula o pagamento total
            pag = valHor * horTra;

            // Exibe o pagamento
            Console.WriteLine("# O pagamento para " + nom + " deve ser " + pag.ToString("F2", ci));
        }
    }
}
