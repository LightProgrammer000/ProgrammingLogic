#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0; // Total de casos
    double numerador, denominador; // Numerador e denominador

    while (n <= 0)
    {
        cout << "# Quantos casos voce vai digitar: ";
        cin >> n; // Lê total de casos
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n# Entre com o numerador: ";
        cin >> numerador; // Lê numerador

        cout << "# Entre com o denominador: ";
        cin >> denominador; // Lê denominador

        if (denominador != 0)
        {
            cout << fixed << setprecision(2);
            cout << "* DIVISAO = " << numerador / denominador << endl; // Exibe resultado
        }

        else
        {
            cout << "* DIVISAO IMPOSSIVEL" << endl; // Denominador zero
        }
    }

    return 0;
}
