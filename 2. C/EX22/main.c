#include <stdio.h>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int horIni, horFin, temp; // Hora inicial, hora final e duração do jogo

    // Solicita a hora inicial
    printf("# Hora inicial: ");
    scanf("%d", &horIni);

    // Solicita a hora final
    printf("# Hora final: ");
    scanf("%d", &horFin);

    putchar('\n'); // Linha em branco para melhor formatação

    // Calcula a duração do jogo
    if (horFin > horIni)
    {
        temp = horFin - horIni; // Duração normal
    }

    else
    {
        temp = (24 + horFin) - horIni; // Duração passando pela meia-noite
    }

    // Verifica se a duração é válida
    if ((temp >= 1) && (temp <= 24))
    {
        printf("# O JOGO DUROU, %d HORA(S)\n", temp); // Exibe a duração
    }

    else
    {
        printf("# Tempo Invalido !\n"); // Exibe mensagem de erro
    }

    return 0;
}
