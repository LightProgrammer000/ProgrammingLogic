Algoritmo "EX05"

// Vari�veis para armazenar n�meros e resultados
Var
   i, idMai, qtd: inteiro
   mai: real
   numVet: vetor[0..5] de real

Inicio

   // Solicita e ajusta a quantidade de n�meros
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)
   qtd <- (qtd - 1)

   // L� os n�meros
   para i de 0 ate qtd faca
       escreva("# Digite um numero: ")
       leia(numVet[i])
   fimpara

   // Encontra o maior valor e sua posi��o
   para i de 0 ate qtd faca

       se (i = 0) ou (mai < numVet[i]) entao
           mai <- numVet[i]
           idMai <- i
       fimse

   fimpara

   // Exibe o maior valor e sua posi��o
   escreval("")
   escreval("# MAIOR VALOR = ", mai)
   escreval("# POSICAO DO MAIOR VALOR = ", idMai)

Fimalgoritmo
