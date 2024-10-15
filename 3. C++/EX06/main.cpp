// Inclui bibliotecas para entrada/sa�da, formata��o e fun��es matem�ticas
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara vari�veis
    double r, are;

    // Solicita o valor do raio
    cout << "# Digite o valor do raio do circulo: ";
    cin >> r;

    // Calcula a �rea do c�rculo
    are = M_PI * pow(r, 2);

    // Define precis�o e exibe a �rea
    cout << fixed << setprecision(3);
    cout << "# Area: " << are << endl;

    return 0;
}
