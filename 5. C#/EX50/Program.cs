// Variáveis para armazenar nome e idade
string auxNom = "";
int qtd, mai = 0;

// Solicita a quantidade de pessoas
Console.Write("# Quantas pessoas voce vai digitar: ");
qtd = int.Parse(Console.ReadLine());

// Declaração dos vetores para idade e nome
int[] vetIda = new int[qtd];
string[] vetNom = new string[qtd];

// Coleta os dados das pessoas
for (int i = 0; i < qtd; i++)
{
    Console.WriteLine($"\n# Dados da {i + 1}a pessoa: ");

    Console.Write("# Nome: ");
    vetNom[i] = Console.ReadLine();

    Console.Write("# Idade: ");
    vetIda[i] = int.Parse(Console.ReadLine());

    // Verifica se a idade atual é a maior
    if (i == 0 || mai < vetIda[i])
    {
        mai = vetIda[i];    // Atualiza a idade máxima
        auxNom = vetNom[i]; // Atualiza o nome da pessoa mais velha
    }
}

// Exibe o nome da pessoa mais velha
Console.WriteLine($"\n# PESSOA MAIS VELHA: {auxNom}");
