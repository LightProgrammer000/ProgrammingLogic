Algoritmo "EX07"

// Declaração de variáveis
Var
   i, j, n, qtd, idAux: inteiro
   acuSomPos: real
   aux: vetor [0..9] de real
   mat, matAlt: vetor [0..9, 0..9] de real

Inicio

   // Inicializa variáveis
   idAux <- 0
   acuSomPos <- 0

   // Solicita ao usuário a ordem da matriz
   escreva("# Qual a ordem da matriz: ")
   leia(qtd)

   // Laço para percorrer a matriz
   para i de 0 ate (qtd - 1) faca
        para j de 0 ate (qtd - 1) faca
        
             // Solicita o elemento da posição [i, j]
             escreva("# Elemento [", i, ",", j, "]: ")
             leia(mat[i,j])

             // Acumula a soma dos elementos positivos
             se (mat[i,j] > 0) entao
                acuSomPos <- acuSomPos + mat[i,j]
             fimse

             // Substitui elementos negativos na matriz alterada
             se (mat[i,j] < 0) entao
                matAlt[i,j] <- exp(mat[i,j], 2) // Eleva ao quadrado
             senao
                matAlt[i,j] <- mat[i,j] // Mantém o valor original
             fimse

             // Armazena elementos da diagonal principal
             se (i = j) entao
                aux[idAux] <- mat[i,j]
                idAux <- idAux + 1
             fimse
        fimpara
   fimpara

   // Exibe a soma dos elementos positivos
   escreval("")
   escreval("# SOMA DOS POSITIVOS: ", acuSomPos)

   // Solicita ao usuário a escolha de uma linha
   escreval("")
   escreva("# Escolha uma linha: ")
   leia(n)
   escreva("# LINHA ESCOLHIDA: ")
   para j de 0 ate (qtd - 1) faca
        escreva(mat[n,j]:1:1, " ")
   fimpara
   escreval("")

   // Solicita ao usuário a escolha de uma coluna
   escreval("")
   escreva("# Escolha uma coluna: ")
   leia(n)
   escreva("# COLUNA ESCOLHIDA: ")
   para i de 0 ate (qtd - 1) faca
        escreva(mat[i,n]:1:1, " ")
   fimpara
   escreval("")

   // Exibe os elementos da diagonal principal
   escreval("")
   escreva("# DIAGONAL PRINCIPAL: ")
   para i de 0 ate (idAux - 1) faca
        escreva(aux[i]:1:1, " ")
   fimpara
   escreval("")

   // Exibe a matriz alterada
   escreval("")
   escreva("# MATRIZ ALTERADA:")
   para i de 0 ate (qtd - 1) faca
        escreval("")
        para j de 0 ate (qtd - 1) faca
             escreva(matAlt[i,j]:1:1, " ")
        fimpara
   fimpara

Fimalgoritmo
