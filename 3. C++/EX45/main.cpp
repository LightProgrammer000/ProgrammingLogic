// Inclui biblioteca de entrada e saída
#include "iostream"

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    // Declara variáveis
    bool flag = false;
    int idAux = 0, qtd, qtdPar = 0;

    // Solicita quantidade de números
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Vetores para armazenar números e números pares
    int numVet[qtd], aux[qtd];

    // Lê os números e identifica os pares
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> numVet[i];

        if (numVet[i] % 2 == 0)
        {
            flag = true; // Indica que há pares

            aux[idAux] = numVet[i]; // Armazena pares
            idAux++;
            qtdPar++;
        }
    }

    // Exibe números pares e a quantidade
    if (flag == true)
    {
        cout << "\n# NUMEROS PARES:" << endl;

        for (int i = 0; i < qtdPar; i++)
        {
            cout << " " << aux[i];
        }

        cout << "\n\n# QUANTIDADE DE PARES = " << qtdPar << endl;
    }

    return 0;
}
