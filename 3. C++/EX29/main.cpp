#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int alc = 0, gas = 0, die = 0, cod = 0; // Contadores e código de entrada

    // Laço até o código ser 4
    while (not (cod == 4))
    {
        cout << "# Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> cod;

        // Incrementa contadores conforme o código
        if (cod == 1)
        {
            alc++; // Alcool
        }

        else if (cod == 2)
        {
            gas++; // Gasolina
        }

        else if (cod == 3)
        {
            die++; // Diesel
        }
    }

    // Exibe os resultados
    cout << "\n# MUITO OBRIGADO" << endl;
    cout << "# Alcool: " << alc << endl;
    cout << "# Gasolina: " << gas << endl;
    cout << "# Diesel: " << die << endl;

    return 0; // Fim
}
