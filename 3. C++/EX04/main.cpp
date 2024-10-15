// Inclui a biblioteca de entrada e saída padrão
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    // Declaração das variáveis inteiras
    int x, y, som;

    // Exibe a mensagem para o usuário inserir o valor de X
    cout << "# Valor de X: ";

    // Lê o valor de X inserido pelo usuário
    cin >> x;

    // Exibe a mensagem para o usuário inserir o valor de Y
    cout << "# Valor de Y: ";

    // Lê o valor de Y inserido pelo usuário
    cin >> y;

    // Calcula a soma de X e Y
    som = x + y;

    // Exibe o resultado da soma
    cout << "# Soma = " << som << endl;

    // Indica que o programa terminou com sucesso
    return 0;
}
