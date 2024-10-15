Algoritmo "EX06"

// Declaração de variáveis
Var
   i, j, qtd, acuSom: inteiro
   mat: vetor [0..9, 0..9] de inteiro

Inicio

   // Solicita ao usuário a ordem da matriz
   escreva("# Qual a ordem da matriz: ")
   leia(qtd)

   // Laço para percorrer as linhas da matriz
   para i de 0 ate (qtd - 1) faca
   
        // Laço para percorrer as colunas da matriz
        para j de 0 ate (qtd - 1) faca

             // Solicita ao usuário o elemento da posição [i, j]
             escreva("# Elemento [",i, ",", j,"]: ")
             leia(mat[i,j])

             // Verifica se o elemento está acima da diagonal principal
             se (i < j) entao

                // Acumula a soma dos elementos acima da diagonal principal
                acuSom <- acuSom + mat[i,j]
             fimse
        fimpara
   fimpara

   // Exibe a soma dos elementos acima da diagonal principal
   escreval("")
   escreval("# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = ", acuSom)

Fimalgoritmo
