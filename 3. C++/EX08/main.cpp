#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara vari�veis
    int dist;
    double comGas, conMed = 0;

    // Solicita a dist�ncia percorrida
    cout << "# Distancia percorrida: ";
    cin >> dist;

    // Solicita o combust�vel gasto
    cout << "# Combustivel gasto: ";
    cin >> comGas;

    // Calcula o consumo m�dio
    conMed = dist / comGas;  // N�o � necess�rio casting aqui

    // Exibe o consumo m�dio com 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "# Consumo medio = " << conMed << endl;

    return 0;
}
