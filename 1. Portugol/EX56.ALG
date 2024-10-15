Algoritmo "EX03"

Var
   i, idAux, j, m, n: inteiro
   mat: vetor[0..9, 0..9] de inteiro
   aux: vetor[0..9] de inteiro

Inicio

   // Inicializa o índice auxiliar para armazenar negativos
   idAux <- 0

   // Solicita a quantidade de linhas da matriz
   escreva("# Qual a quantidade de linhas da matriz: ")
   leia(m)

   // Solicita a quantidade de colunas da matriz
   escreva("# Qual a quantidade de colunas da matriz: ")
   leia(n)

   // Percorre as linhas da matriz
   para i de 0 ate (m - 1) faca

      escreval("")

      // Percorre as colunas da linha
      para j de 0 ate (n - 1) faca

         // Lê o elemento na posição [i,j]
         escreva("# Elemento [",i ,",", j, "]: ")
         leia(mat[i, j])

         // Armazena o valor negativo no vetor auxiliar
         se (mat[i, j] < 0) entao
            aux[idAux] <- mat[i, j]
            idAux <- idAux + 1
         fimse
      fimpara
   fimpara

   // Exibe os valores negativos encontrados
   escreval("")
   escreval("# VALORES NEGATIVOS: ")
   para i de 0 ate (idAux-1) faca
      escreval("# ", aux[i])
   fimpara

Fimalgoritmo
