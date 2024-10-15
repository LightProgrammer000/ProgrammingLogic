#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    // Variável para armazenar a quantidade de alunos
    int qtd;
    double not1, not2;

    // Solicita a quantidade de alunos a serem digitados
    printf("# Quantos alunos serao digitados: ");
    scanf("%d", &qtd);

    // Declaração dos vetores para nomes e médias
    char vetNom[qtd][50];
    double vetMed[qtd];

    // Loop para coletar dados de cada aluno
    for (int i = 0; i < qtd; i++)
    {
        // Solicita o nome do aluno
        printf("\n# Nome: ");
        getchar(); // Limpa o buffer
        fgets(vetNom[i], 50, stdin);

        // Solicita a primeira nota
        printf("# Digite 1a nota do %do aluno: ", i + 1);
        scanf("%lf", &not1);

        // Solicita a segunda nota
        printf("# Digite 2a nota do %do aluno: ", i + 1);
        scanf("%lf", &not2);

        // Calcula a média das notas
        vetMed[i] = (not1 + not2) / 2;
    }

    // Exibe os alunos aprovados
    printf("\n* Alunos aprovados:\n");
    for (int i = 0; i < qtd; i++)
    {
        if (vetMed[i] >= 6.0) // Verifica se a média é maior ou igual a 6
        {
            printf("%s", vetNom[i]); // Exibe o nome do aluno aprovado
        }
    }

    return 0;
}
