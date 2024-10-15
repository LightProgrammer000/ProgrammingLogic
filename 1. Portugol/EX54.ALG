Algoritmo "EX01"

Var
   i, j, qtd, qtdNeg, idAux: inteiro
   aux: vetor [0..10] de inteiro
   mat: vetor [0..10, 0..10] de inteiro

Inicio

   // Inicializa a quantidade de números negativos
   qtdNeg <- 0

   // Inicializa o índice auxiliar
   idAux <- 0

   // Solicita a ordem da matriz
   escreva("# Qual a ordem da matriz: ")
   leia(qtd)

   // Percorre as linhas da matriz
   para i de 0 ate (qtd - 1) faca

      // Percorre as colunas da matriz
      para j de 0 ate (qtd - 1) faca

         // Solicita o valor do elemento na posição [i,j]
         escreva("# Elemento [",i, ",", j, "]: ")
         leia(mat[i,j])

         // Verifica se o valor é negativo
         se (mat[i,j] < 0) entao
            qtdNeg <- qtdNeg + 1
         fimse

         // Verifica se o elemento está na diagonal principal
         se (i = j) entao
            aux[idAux] <- mat[i,j]
            idAux <- idAux + 1
         fimse
      fimpara
   fimpara

   // Exibe a diagonal principal
   escreval("")
   escreval("# DIAGONAL PRINCIPAL: ")

   // Percorre o vetor auxiliar e exibe os elementos da diagonal
   para i de 0 ate (idAux - 1) faca
      escreva(aux[i], " ")
   fimpara

   // Exibe a quantidade de números negativos
   escreval("")
   escreval("")
   escreval("# QUANTIDADE DE NEGATIVOS = ", qtdNeg)

Fimalgoritmo
