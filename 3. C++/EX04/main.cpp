// Inclui a biblioteca de entrada e sa�da padr�o
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara��o das vari�veis inteiras
    int x, y, som;

    // Exibe a mensagem para o usu�rio inserir o valor de X
    cout << "# Valor de X: ";

    // L� o valor de X inserido pelo usu�rio
    cin >> x;

    // Exibe a mensagem para o usu�rio inserir o valor de Y
    cout << "# Valor de Y: ";

    // L� o valor de Y inserido pelo usu�rio
    cin >> y;

    // Calcula a soma de X e Y
    som = x + y;

    // Exibe o resultado da soma
    cout << "# Soma = " << som << endl;

    // Indica que o programa terminou com sucesso
    return 0;
}
