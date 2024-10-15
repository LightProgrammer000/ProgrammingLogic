#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int pass; // Variável para a senha

    cout << "# Digite a senha: "; // Solicita a senha
    cin >> pass; // Lê a senha

    // Loop até a senha ser correta
    while (pass != 2002)
    {
        cout << "# Senha invalida! Tente novamente: "; // Mensagem de erro
        cin >> pass; // Lê a nova senha
    }

    cout << "# Acesso permitido!" << endl; // Acesso concedido

    return 0; // Fim do programa
}
