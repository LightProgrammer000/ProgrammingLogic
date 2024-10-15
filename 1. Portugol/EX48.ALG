Algoritmo "EX07"

// Variáveis
Var
   i, idAux, qtd, qtdAbaiMed: inteiro
   acuSom, med: real
   vetNum, aux: vetor[1..4] de real

Inicio

   // Inicializa variáveis
   idAux <- 1
   acuSom <- 0
   qtdAbaiMed <- 0

   // Solicita a quantidade de elementos
   escreva("# Quantos elementos vai ter o vetor: ")
   leia(qtd)

   // Lê valores e acumula a soma
   para i de 1 ate qtd faca
       escreva("# Digite um numero: ")
       leia(vetNum[i])
       acuSom <- acuSom + vetNum[i]
   fimpara

   // Calcula média
   med <- acuSom / qtd

   // Armazena elementos abaixo da média
   para i de 1 ate qtd faca
       se (vetNum[i] < med) entao
           aux[idAux] <- vetNum[i]
           idAux <- idAux + 1
           qtdAbaiMed <- qtdAbaiMed + 1
       fimse
   fimpara

   // Exibe a média e elementos abaixo da média
   escreval("")
   escreval("# MEDIA DO VETOR = ", med:1:3)
   
   escreval("# ELEMENTOS ABAIXO DA MEDIA:")
   para i de 1 ate qtdAbaiMed faca
       escreval(aux[i]:1:1)
   fimpara

Fimalgoritmo
