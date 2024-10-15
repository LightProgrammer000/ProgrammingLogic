using System;
using System.Globalization;

namespace EX46
{
    class EX46
    {
        // Define cultura para formatação numérica
        static CultureInfo ci = CultureInfo.InvariantCulture;

        static void Main(String[] args)
        {
            double mai = 0; // Maior valor
            int qtd, idMai = 0; // Quantidade e índice do maior valor

            // Solicita a quantidade de números a serem digitados
            Console.Write("# Quantos numeros voce vai digitar: ");
            qtd = int.Parse(Console.ReadLine());

            double[] aux = new double[2]; // Array auxiliar para maior valor e índice
            double[] numVet = new double[qtd]; // Array para armazenar os números

            // Popular o vetor com os números digitados
            numVet[0] = popularVetor(qtd, numVet);

            // Encontra o maior valor e seu índice
            aux[0] = indMaiVal(qtd, mai, idMai, numVet, aux);

            // Relatório do maior valor e sua posição
            relatorio(aux[0], aux[1]);
        }

        // Método para popular o vetor com números
        private static double popularVetor(int qtd, double[] numVet)
        {
            for (int i = 0; i < qtd; i++)
            {
                Console.Write("# Digite um numero: ");
                numVet[i] = double.Parse(Console.ReadLine(), ci); // Lê o número com formatação correta
            }

            return numVet[0]; // Retorna o primeiro número (opcional)
        }

        // Método para encontrar o maior valor e seu índice
        private static double indMaiVal(int qtd, double mai, int idMai, double[] numVet, double[] aux)
        {
            for (int i = 0; i < qtd; i++)
            {
                // Atualiza maior valor e seu índice se necessário
                if (i == 0 || mai < numVet[i])
                {
                    mai = numVet[i];
                    idMai = i;
                }
            }

            aux[0] = mai; // Armazena maior valor
            aux[1] = idMai; // Armazena índice do maior valor

            return aux[0]; // Retorna maior valor
        }

        // Método para exibir o relatório do maior valor e sua posição
        private static void relatorio(double mai, double idMai)
        {
            Console.WriteLine($"# MAIOR VALOR = {mai.ToString("F1", ci)}");
            Console.WriteLine($"# POSICAO DO MAIOR VALOR = {idMai}");
        }
    }
}
