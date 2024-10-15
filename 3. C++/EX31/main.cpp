#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    bool z = true; // Controle do loop principal
    int i = 0, n, som = 0; // Contadores e acumulador

    // Loop principal que se repete até a entrada ser 0
    while (z)
    {
        cout << "# Digite um numero inteiro: ";
        cin >> n;

        if (n == 0) // Se o número for zero, encerra o loop
        {
            z = false;
        }
        else
        {
            // Soma os próximos cinco números pares
            while (i < 5)
            {
                if (n % 2 == 0) // Se for par, adiciona à soma
                {
                    som += n;
                    i++;
                }

                n++; // Incrementa para verificar o próximo número
            }
        }

        // Exibe o resultado da soma
        cout << "# SOMA: " << som << endl << endl;

        // Reseta os contadores para a próxima iteração
        i = 0;
        som = 0;
    }

    return 0;
}
