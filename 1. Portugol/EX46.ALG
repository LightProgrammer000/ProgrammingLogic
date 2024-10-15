Algoritmo "EX05"

// Variáveis para armazenar números e resultados
Var
   i, idMai, qtd: inteiro
   mai: real
   numVet: vetor[0..5] de real

Inicio

   // Solicita e ajusta a quantidade de números
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)
   qtd <- (qtd - 1)

   // Lê os números
   para i de 0 ate qtd faca
       escreva("# Digite um numero: ")
       leia(numVet[i])
   fimpara

   // Encontra o maior valor e sua posição
   para i de 0 ate qtd faca

       se (i = 0) ou (mai < numVet[i]) entao
           mai <- numVet[i]
           idMai <- i
       fimse

   fimpara

   // Exibe o maior valor e sua posição
   escreval("")
   escreval("# MAIOR VALOR = ", mai)
   escreval("# POSICAO DO MAIOR VALOR = ", idMai)

Fimalgoritmo
