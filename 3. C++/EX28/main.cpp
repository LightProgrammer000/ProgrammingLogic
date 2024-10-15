#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n, soma = 0; // Variáveis para nota e soma

    // Lê a primeira nota
    cout << "# Digite a primeira nota: ";
    cin >> n;

    // Valida a primeira nota
    while ((n < 0) || (n > 10))
    {
        cout << "# Valor invalido! Tente novamente: ";
        cin >> n;
    }
    soma += n; // Adiciona a primeira nota à soma

    // Lê a segunda nota
    cout << "\n# Digite a segunda nota: ";
    cin >> n;

    // Valida a segunda nota
    while ((n < 0) || (n > 10))
    {
        cout << "# Valor invalido! Tente novamente: ";
        cin >> n;
    }
    soma += n; // Adiciona a segunda nota à soma

    cout << fixed << setprecision(2) << endl; // Formata a saída
    cout << "# Media: " << soma / 2 << endl; // Calcula e exibe a média

    return 0; // Fim
}
