using System.Globalization;

int qtd;
double not1, not2;

CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita a quantidade de alunos
Console.Write("# Quantos alunos serao digitados: ");
qtd = int.Parse(Console.ReadLine());

// Declaração dos vetores para nomes e médias
string[] vetNom = new string[qtd];
double[] vetMed = new double[qtd];

// Coleta os dados dos alunos
for (int i = 0; i < qtd; i++)
{
    Console.Write("\n# Digite Nome: ");
    vetNom[i] = Console.ReadLine();

    Console.Write($"# Digite 1a nota do {i + 1}o aluno: ");
    not1 = double.Parse(Console.ReadLine(), ci);

    Console.Write($"# Digite 2a nota do {i + 1}o aluno: ");
    not2 = double.Parse(Console.ReadLine(), ci);

    vetMed[i] = (not1 + not2) / 2; // Calcula a média
}

// Exibe alunos aprovados
Console.WriteLine("\n* Alunos aprovados: ");
for (int i = 0; i < qtd; i++)
{
    // Verifica se a média é suficiente
    if (vetMed[i] >= 6.0) 
    {
        Console.WriteLine($"{vetNom[i]}"); // Exibe o nome
    }
}
