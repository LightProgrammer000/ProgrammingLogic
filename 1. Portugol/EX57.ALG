Algoritmo "EX04"

Var
   i, j, n: inteiro
   aux: vetor [0..9] de inteiro
   mat: vetor [0..9, 0..9] de inteiro

Inicio

   // Solicita a ordem da matriz
   escreva("# Qual a ordem da matriz: ")
   leia(n)

   // Percorre as linhas da matriz
   para i de 0 ate (n - 1) faca

      // Percorre as colunas da matriz
      para j de 0 ate (n - 1) faca

         // Lê o elemento na posição [i,j]
         escreva("# Elemento [",i ,",", j,"]: ")
         leia(mat[i,j])

         // Inicializa aux[i] e atualiza o maior valor da linha
         se ((j = 0) ou (aux[i] < mat[i,j])) entao
            aux[i] <- mat[i,j]
         fimse
      fimpara
   fimpara

   // Exibe o maior elemento de cada linha
   escreval("")
   escreval("# MAIOR ELEMENTO DE CADA LINHA: ")
   para i de 0 ate (n - 1) faca
      escreval("# Linha",i + 1,": ", aux[i])
   fimpara

Fimalgoritmo
