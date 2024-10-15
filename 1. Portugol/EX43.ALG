Algoritmo "EX02"

// Variáveis para iteração e acumulação de soma
Var
   i, n: inteiro
   acuSom: real
   vet: vetor [1..4] de real

Inicio

   // Inicializa a variável de soma acumulada
   acuSom <- 0

   // Solicita a quantidade de números
   escreva("# Quantos numeros voce vai digitar: ")
   leia(n)

   // Lê os números e acumula a soma
   para i de 1 ate n faca
      escreva("# Digite um numero: ")
      leia(vet[i])
      acuSom <- acuSom + vet[i]
   fimpara

   escreval("")

   // Exibe os valores inseridos
   escreva("# VALORES = ")
   para i de 1 ate n faca
      escreva(vet[i]:1:2, " ")
   fimpara

   escreval("")

   // Exibe a soma e a média dos valores
   escreval("# Soma = ", acuSom:1:2)
   escreval("# Media = ", (acuSom/n):1:2)

Fimalgoritmo
