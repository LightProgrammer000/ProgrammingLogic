// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Função principal
int main ()
{
    // Declara variáveis
    double acuAlt = 0;
    int qtd, idAux = 1, contIda = 0;

    // Solicita quantidade de pessoas
    cout << "# Quantas pessoas serao digitadas: ";
    cin >> qtd;

    // Valida se a quantidade está entre 1 e 5
    while ((qtd < 1) || (qtd > 5))
    {
        cout << "\n# Valor maximo de 5 pessoas" << endl;
        cout << "# Quantas pessoas serao digitadas: ";
        cin >> qtd;
    }

    // Vetores para idade, altura e nome
    int vetIda[qtd];
    double vetAlt[qtd];
    string vetNom[qtd], aux[qtd];

    // Lê dados das pessoas
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Dados da " << i+1 << "a pessoa:" << endl;

        cout << "# Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, vetNom[i]);

        cout << "# Idade: ";
        cin >> vetIda[i];

        cout << "# Altura: ";
        cin >> vetAlt[i];

        acuAlt += vetAlt[i]; // Soma a altura
    }

    // Identifica pessoas com menos de 16 anos
    for (int i = 0; i < qtd; i++)
    {
        if (vetIda[i] < 16)
        {
            contIda++;
            aux[idAux] = vetNom[i]; // Armazena nomes
            idAux++;
        }
    }

    // Exibe altura média e porcentagem de pessoas com menos de 16 anos
    cout << fixed << setprecision(2) << endl;
    cout << "# Altura media: " << acuAlt / qtd;

    cout << fixed << setprecision(1) << endl;
    cout << "# Pessoas com menos de 16 anos: " << ((double) contIda/qtd) * 100 << "%";

    // Exibe nomes das pessoas com menos de 16 anos
    for (int i = 0; i < idAux; i++)
    {
        cout << aux[i] << endl;
    }

    return 0;
}
