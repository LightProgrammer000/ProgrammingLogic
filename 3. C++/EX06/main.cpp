// Inclui bibliotecas para entrada/saída, formatação e funções matemáticas
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara variáveis
    double r, are;

    // Solicita o valor do raio
    cout << "# Digite o valor do raio do circulo: ";
    cin >> r;

    // Calcula a área do círculo
    are = M_PI * pow(r, 2);

    // Define precisão e exibe a área
    cout << fixed << setprecision(3);
    cout << "# Area: " << are << endl;

    return 0;
}
