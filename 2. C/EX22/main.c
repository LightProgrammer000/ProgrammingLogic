#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declara��o de vari�veis
    int horIni, horFin, temp; // Hora inicial, hora final e dura��o do jogo

    // Solicita a hora inicial
    printf("# Hora inicial: ");
    scanf("%d", &horIni);

    // Solicita a hora final
    printf("# Hora final: ");
    scanf("%d", &horFin);

    putchar('\n'); // Linha em branco para melhor formata��o

    // Calcula a dura��o do jogo
    if (horFin > horIni)
    {
        temp = horFin - horIni; // Dura��o normal
    }

    else
    {
        temp = (24 + horFin) - horIni; // Dura��o passando pela meia-noite
    }

    // Verifica se a dura��o � v�lida
    if ((temp >= 1) && (temp <= 24))
    {
        printf("# O JOGO DUROU, %d HORA(S)\n", temp); // Exibe a dura��o
    }

    else
    {
        printf("# Tempo Invalido !\n"); // Exibe mensagem de erro
    }

    return 0;
}
