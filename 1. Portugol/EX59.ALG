Algoritmo "EX06"

// Declara��o de vari�veis
Var
   i, j, qtd, acuSom: inteiro
   mat: vetor [0..9, 0..9] de inteiro

Inicio

   // Solicita ao usu�rio a ordem da matriz
   escreva("# Qual a ordem da matriz: ")
   leia(qtd)

   // La�o para percorrer as linhas da matriz
   para i de 0 ate (qtd - 1) faca
   
        // La�o para percorrer as colunas da matriz
        para j de 0 ate (qtd - 1) faca

             // Solicita ao usu�rio o elemento da posi��o [i, j]
             escreva("# Elemento [",i, ",", j,"]: ")
             leia(mat[i,j])

             // Verifica se o elemento est� acima da diagonal principal
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
