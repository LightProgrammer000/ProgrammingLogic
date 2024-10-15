Algoritmo "EX02"

Var
   i, j, m, n: inteiro
   acuSom: real
   aux: vetor[0..9] de real
   mat: vetor [0..9, 0..9] de real

Inicio

   // Inicializa o acumulador de soma
   acuSom <- 0

   // Solicita a quantidade de linhas da matriz
   escreva("# Qual a quantidade de linhas da matriz: ")
   leia(m)

   // Solicita a quantidade de colunas da matriz
   escreva("# Qual a quantidade de colunas da matriz: ")
   leia(n)

   // Percorre as linhas da matriz
   para i de 0 ate (m - 1) faca

      // Solicita os elementos da linha i
      escreval("")
      escreval("# Digite os elementos da ",i+1,"a. linha: ")

      // Percorre as colunas da linha i
      para j de 0 ate (n - 1) faca

         // Lê o valor do elemento [i,j]
         escreva("# Elemento: ")
         leia(mat[i,j])

         // Soma os valores da linha
         acuSom <- acuSom + mat[i,j]
      fimpara

      // Armazena a soma da linha no vetor auxiliar
      aux[i] <- acuSom

      // Reseta o acumulador para a próxima linha
      acuSom <- 0
   fimpara

   // Exibe o vetor gerado com a soma de cada linha
   escreval("# Vetor Gerado: ")
   para i de 0 ate (m - 1) faca
      escreval(aux[i])
   fimpara

Fimalgoritmo
