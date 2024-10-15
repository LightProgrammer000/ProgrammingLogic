#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int alc = 0, gas = 0, die = 0, cod = 0; // Contadores e c�digo de entrada

    // La�o at� o c�digo ser 4
    while (not (cod == 4))
    {
        cout << "# Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> cod;

        // Escolha baseada no c�digo
        switch (cod)
        {
            case 1:
                alc++; // Incrementa Alcool
                break;

            case 2:
                gas++; // Incrementa Gasolina
                break;

            case 3:
                die++; // Incrementa Diesel
                break;

            case 4:
                cout << "\n# Encerrando o programa" << endl; // Sa�da
                break;

            default:
                cout << "# Opcao invalida!\n" << endl; // Entrada inv�lida
                break;
        }
    }

    // Exibe os resultados
    cout << "\n# MUITO OBRIGADO" << endl;
    cout << "# Alcool: " << alc << endl;
    cout << "# Gasolina: " << gas << endl;
    cout << "# Diesel: " << die << endl;

    return 0; // Fim
}
