#include <iostream>

using namespace std;

// Calcula o fatorial
int fatorial(int n)
{
    int fat = 1; // Fatorial

    for (int i = 1; i <= n; i++)
    {
        fat *= i; // Multiplica
    }

    return fat; // Retorna
}

int main()
{
    int n;

    cout << "# Digite o valor de N: ";
    cin >> n; // Lê N

    if (n < 0)
    {
        cout << "# Valor inválido." << endl; // Negativo
    }

    else if (n <= 15)
    {
        cout << "# Fatorial = " << fatorial(n) << endl; // Mostra fatorial
    }

    else
    {
        cout << "# Limite excedido." << endl; // Acima de 15
    }

    return 0;
}
