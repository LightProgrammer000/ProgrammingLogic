// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    int qtd, mai = 0;

    // Solicita a quantidade de pessoas a serem digitadas
    cout << "# Quantas pessoas voce vai digitar: ";
    cin >> qtd;

    string vetNom[qtd], auxNom; // Vetor para nomes e variável auxiliar
    int vetIda[qtd]; // Vetor para idades

    // Lê dados de cada pessoa
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Dados da " << i + 1 << "a pessoa: " << endl;

        cout << "# Nome: ";
        cin.ignore(INT_MAX, '\n'); // Ignora o buffer
        getline(cin, vetNom[i]); // Lê o nome

        cout << "# Idade: ";
        cin >> vetIda[i]; // Lê a idade

        // Atualiza a maior idade e nome correspondente
        if ((i == 0) || (mai < vetIda[i]))
        {
            mai = vetIda[i];
            auxNom = vetNom[i];
        }
    }

    // Exibe a pessoa mais velha
    cout << "\n# PESSOA MAIS VELHA: " << auxNom << endl;

    return 0; // Retorno da função
}
