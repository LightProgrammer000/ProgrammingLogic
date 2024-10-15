#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int ida, i = 0, som = 0; // Idade, contador e soma

    cout << "# Digite as idades: " << endl;

    while (ida >= 0) // Continua enquanto a idade for não negativa
    {
        cout << "# Idade: ";
        cin >> ida; // Lê a idade

        if (ida < 0) // Idade negativa
        {
            if (i == 0) // Sem idades válidas
            {
                cout << "# IMPOSSIVEL CALCULAR" << endl; // Mensagem
            }
        }

        else
        {
            som += ida; // Soma das idades
            i++; // Contador
        }
    }

    if (i > 0) // Se houver idades válidas
    {
        cout << fixed << setprecision(2); // Formata saída
        cout << "# Media: " << (double) som / i << endl; // Mostra média
    }

    return 0; // Fim
}
