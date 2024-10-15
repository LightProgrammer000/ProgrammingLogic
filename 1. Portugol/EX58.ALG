Algoritmo "EX05"

Var
   m, n, i, j: inteiro
   matA, matB, matC: vetor[0..10, 0..10] de inteiro

Inicio

   // Solicita o número de linhas e colunas das matrizes
   escreva("# Quantas linhas vai ter cada matriz: ")
   leia(m)
   
   escreva("# Quantas colunas vai ter cada matriz: ")
   leia(n)

   // Lê os valores da matriz A
   escreval("")
   escreval("# Digite os valores da matriz A: ")
   para i de 0 ate (m - 1) faca
      para j de 0 ate (n - 1) faca

         // Lê o elemento na posição [i,j] da matriz A
         escreva("# Elemento [",i, ",", j,"]: ")
         leia(matA[i,j])
      fimpara
   fimpara

   // Lê os valores da matriz B
   escreval("")
   escreval("# Digite os valores da matriz B: ")
   para i de 0 ate (m - 1) faca
      para j de 0 ate (n - 1) faca

         // Lê o elemento na posição [i,j] da matriz B
         escreva("# Elemento [",i, ",", j,"]: ")
         leia(matB[i,j])
      fimpara
   fimpara

   // Calcula e exibe a matriz soma
   escreval("")
   escreva("# MATRIZ SOMA: ")
   para i de 0 ate (m - 1) faca
      escreval("")
      para j de 0 ate (n - 1) faca
      
         // Soma os elementos correspondentes das matrizes A e B
         matC[i,j] <- matA[i,j] + matB[i,j]

         // Exibe o elemento na posição [i,j] da matriz soma
         escreva(matC[i, j], " ")
      fimpara
   fimpara

Fimalgoritmo
