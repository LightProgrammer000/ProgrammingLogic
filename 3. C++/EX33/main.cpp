#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n1, n2, som = 0, aux = 0; // Variáveis para entrada, soma e auxiliar

    // Entrada dos dois números
    cout << "# Digite dois numeros:" << endl;
    cout << "# Digite N1: ";
    cin >> n1;
    cout << "# Digite N2: ";
    cin >> n2;

    // Garante que n1 seja o menor número
    if (n1 > n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    // Soma os números ímpares entre n1 e n2
    for (int i = n1 + 1; i < n2; i++)
    {
        if (i % 2 != 0)
        {
            som += i;
        }
    }

    // Exibe o resultado
    cout << "# Soma dos Impares = " << som << endl;

    return 0; // Fim
}
