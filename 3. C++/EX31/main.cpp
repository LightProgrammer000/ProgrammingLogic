#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    bool z = true; // Controle do loop principal
    int i = 0, n, som = 0; // Contadores e acumulador

    // Loop principal que se repete at� a entrada ser 0
    while (z)
    {
        cout << "# Digite um numero inteiro: ";
        cin >> n;

        if (n == 0) // Se o n�mero for zero, encerra o loop
        {
            z = false;
        }
        else
        {
            // Soma os pr�ximos cinco n�meros pares
            while (i < 5)
            {
                if (n % 2 == 0) // Se for par, adiciona � soma
                {
                    som += n;
                    i++;
                }

                n++; // Incrementa para verificar o pr�ximo n�mero
            }
        }

        // Exibe o resultado da soma
        cout << "# SOMA: " << som << endl << endl;

        // Reseta os contadores para a pr�xima itera��o
        i = 0;
        som = 0;
    }

    return 0;
}
