#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n, qtd, den = 0, fora = 0; // Variáveis de controle

    // Solicita a quantidade de números
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Laço para entrada e contagem dos números
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> n;

        // Verifica se está entre 10 e 20
        if ((n >= 10) && (n <= 20))
        {
            den++;
        }

        // Caso contrário, está fora
        else
        {
            fora++;
        }
    }

    // Exibe os resultados
    cout << "\n# " << den << " DENTRO" << endl;
    cout << "# " << fora << " FORA" << endl;

    return 0; // Fim
}
