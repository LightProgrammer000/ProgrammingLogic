Algoritmo "EX01"

// Vari�veis para itera��o e vetor de n�meros
Var
   i, n: inteiro
   vet: vetor [1..10] de inteiro

Inicio

   // Solicita a quantidade de n�meros
   escreva("# Quantos numeros voce vai digitar: ")
   leia(n)

   // Garante que o n�mero m�ximo seja 10
   enquanto (n > 10) faca
      escreval("# Maximo ate 10 numeros")
      escreval("")
      escreva("# Quantos numeros voce vai digitar: ")
      leia(n)
   fimenquanto

   // Solicita os n�meros ao usu�rio
   para i de 1 ate n faca
      escreva("# Digite um numero: ")
      leia(vet[i])
   fimpara

   escreval("")
   escreval("# Numeros negativos")

   // Exibe os n�meros negativos
   para i de 1 ate n faca
      se (vet[i] < 0) entao
         escreval("* ", vet[i])
      fimse
   fimpara

Fimalgoritmo
