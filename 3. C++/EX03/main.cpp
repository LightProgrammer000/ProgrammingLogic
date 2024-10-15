#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    string nom1, nom2;
    int ida1, ida2;
    double med;

    // Dados da primeira pessoa
    cout << "# Nome da primeira pessoa: ";
    getline(cin, nom1);

    cout << "# Idade: ";
    cin >> ida1;

    // Dados da segunda pessoa
    cout << "\n# Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); // Apenas uma vez para limpar o buffer
    getline(cin, nom2);

    cout << "# Idade: ";
    cin >> ida2;

    // Cálculo da média
    med = (double)(ida1 + ida2) / 2;

    // Exibir a média com uma casa decimal
    cout << fixed << setprecision(1);
    cout << "\n# A idade media de " << nom1 << " e " << nom2 << " = "
         << med << " anos" << endl;

    return 0;
}
