using System;
using System.Globalization;

namespace EX16
{
    class EX16
    {
        static void Main(String[] args)
        {
            // Declara variável para medir a glicose
            double gli;

            // Define a cultura para formatação numérica
            CultureInfo ci = CultureInfo.InvariantCulture;

            // Solicita e lê a medida da glicose
            Console.Write("# Digite a medida da glicose: ");
            gli = double.Parse(Console.ReadLine(), ci);

            // Classifica a glicose com base nos valores informados
            string resp = (gli <= 100) ? "* Classificação: normal" :
                          (gli <= 140) ? "* Classificação: elevado" : "* Classificação: diabetes";

            // Exibe a classificação da glicose
            Console.WriteLine(resp);
        }
    }
}
