Algoritmo "EX02"

// Vari�veis para itera��o e acumula��o de soma
Var
   i, n: inteiro
   acuSom: real
   vet: vetor [1..4] de real

Inicio

   // Inicializa a vari�vel de soma acumulada
   acuSom <- 0

   // Solicita a quantidade de n�meros
   escreva("# Quantos numeros voce vai digitar: ")
   leia(n)

   // L� os n�meros e acumula a soma
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

   // Exibe a soma e a m�dia dos valores
   escreval("# Soma = ", acuSom:1:2)
   escreval("# Media = ", (acuSom/n):1:2)

Fimalgoritmo
