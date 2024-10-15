Algoritmo "EX01"

// Variáveis para iteração e vetor de números
Var
   i, n: inteiro
   vet: vetor [1..10] de inteiro

Inicio

   // Solicita a quantidade de números
   escreva("# Quantos numeros voce vai digitar: ")
   leia(n)

   // Garante que o número máximo seja 10
   enquanto (n > 10) faca
      escreval("# Maximo ate 10 numeros")
      escreval("")
      escreva("# Quantos numeros voce vai digitar: ")
      leia(n)
   fimenquanto

   // Solicita os números ao usuário
   para i de 1 ate n faca
      escreva("# Digite um numero: ")
      leia(vet[i])
   fimpara

   escreval("")
   escreval("# Numeros negativos")

   // Exibe os números negativos
   para i de 1 ate n faca
      se (vet[i] < 0) entao
         escreval("* ", vet[i])
      fimse
   fimpara

Fimalgoritmo
