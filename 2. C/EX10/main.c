#include <stdio.h>

int main (int argc, char *argv[])
{
    int seg, min, hor; // Variáveis para segundos, minutos e horas

    // Solicita a duração em segundos
    printf("# Digite a duracao em segundos: ");
    scanf("%d", &seg);

    // Converte para minutos e segundos
    min = seg / 60;
    seg = seg % 60;

    // Converte para horas e minutos
    hor = min / 60;
    min = min % 60;

    // Exibe o resultado no formato HH:MM:SS
    printf("\n# Resultado: %.2d:%.2d:%.2d\n", hor, min, seg);

    return 0;
}
