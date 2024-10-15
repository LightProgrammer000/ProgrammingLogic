#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    int qtd; // Total de casos
    double nota, somaNotas; // Nota e soma ponderada

    cout << "# Quantos casos voce vai digitar: ";
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        somaNotas = 0; // Reseta soma

        for (int j = 0; j < 3; j++) {
            cout << "# Nota " << j + 1 << ": ";
            cin >> nota; // Lê nota

            switch (j) {
                case 0:
                    somaNotas += nota * 2; // Peso 2
                    break;
                case 1:
                    somaNotas += nota * 3; // Peso 3
                    break;
                case 2:
                    somaNotas += nota * 5; // Peso 5
                    break;
            }
        }

        cout << fixed << setprecision(1);
        cout << "# Media = " << (somaNotas / 10) << endl << endl; // Exibe média
    }

    return 0;
}
