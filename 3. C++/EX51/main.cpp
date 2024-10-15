// Inclui bibliotecas necess�rias
#include <iostream>
#include <string>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    int qtd; // Quantidade de alunos
    double n1, n2; // Notas dos alunos

    // Solicita a quantidade de alunos
    cout << "# Quantos alunos serao digitados: ";
    cin >> qtd;

    double vetMed[qtd]; // Vetor para m�dias
    string vetNom[qtd]; // Vetor para nomes

    // L� os dados de cada aluno
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Digite nome: ";
        cin.ignore(INT_MAX, '\n'); // Ignora o buffer
        getline(cin, vetNom[i]); // L� o nome

        cout << "# Digite 1a nota do " << i + 1 << "o aluno: ";
        cin >> n1; // L� a 1a nota

        cout << "# Digite 2a nota do " << i + 1 << "o aluno: ";
        cin >> n2; // L� a 2a nota

        vetMed[i] = (n1 + n2) / 2; // Calcula a m�dia
    }

    // Exibe alunos aprovados
    cout << "\n* Alunos aprovados: " << endl;
    for (int i = 0; i < qtd; i++)
    {
        if (vetMed[i] >= 6.0) // Verifica se a m�dia � suficiente
        {
            cout << "# " << vetNom[i] << endl; // Exibe nome do aluno
        }
    }

    return 0; // Retorno da fun��o
}
