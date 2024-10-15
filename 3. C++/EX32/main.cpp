#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n; // Número para a tabuada

    // Solicita o valor da tabuada
    cout << "# Deseja a tabuada para qual valor: ";
    cin >> n;

    // Exibe a tabuada de 1 a 10
    for (int i = 1; i < 11; i++)
    {
        cout << "# " << n << " x " << i << " = " << n * i << endl;
    }

    return 0; // Fim do programa
}
