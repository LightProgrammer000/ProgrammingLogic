Algoritmo "EX06"

// Vari�veis e vetores
Var
   i, qtd: inteiro
   vetA, vetB, vetC: vetor [1..6] de real

Inicio

   // Solicita a quantidade de valores
   escreva("# Quantos valores vai ter cada vetor: ")
   leia(qtd)

   // L� valores do vetor A
   escreval("# Digite os valores do vetor A: ")
   para i de 1 ate qtd faca
       escreva("# Valor[", i, "]: ")
       leia(vetA[i])
   fimpara

   // L� valores do vetor B
   escreval("# Digite os valores do vetor B: ")
   para i de 1 ate qtd faca
       escreva("# Valor[", i, "]: ")
       leia(vetB[i])
   fimpara

   // Soma vetores A e B e exibe o vetor C
   escreval("# VETOR RESULTANTE: ")
   para i de 1 ate qtd faca
       vetC[i] <- vetA[i] + vetB[i]
       escreval("-> ", vetC[i])
   fimpara

Fimalgoritmo
