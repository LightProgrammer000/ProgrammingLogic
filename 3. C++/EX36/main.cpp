#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n, qtd; // Vari�veis de entrada e contagem

    // Entrada da quantidade de n�meros
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Processa a entrada de cada n�mero
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Digite um numero: ";
        cin >> n;

        // Classifica��o do n�mero
        if (n > 0) // Verifica se positivo
        {
            if (n % 2 == 0)
                cout << "# PAR POSITIVO" << endl;

            else
                cout << "# IMPAR POSITIVO" << endl;
        }

        else if (n < 0) // Verifica se negativo
        {
            if (n % 2 == 0)
                cout << "# PAR NEGATIVO" << endl;

            else
                cout << "# IMPAR NEGATIVO" << endl;
        }

        else // Caso seja nulo
        {
            cout << "# NULO" << endl;
        }
    }

    return 0; // Fim do programa
}
