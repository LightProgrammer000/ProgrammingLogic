#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n, qtd, den = 0, fora = 0; // Vari�veis de controle

    // Solicita a quantidade de n�meros
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // La�o para entrada e contagem dos n�meros
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> n;

        // Verifica se est� entre 10 e 20
        if ((n >= 10) && (n <= 20))
        {
            den++;
        }

        // Caso contr�rio, est� fora
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
