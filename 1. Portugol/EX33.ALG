Algoritmo "EX09"

// Vari�veis
Var
   i, n1, n2, som, aux: inteiro

Inicio

   // Contador
   i <- 0

   // Soma dos �mpares
   som <- 0

   // Auxiliar para troca
   aux <- 0

   // Solicita entrada dos n�meros
   escreval("# Digite dois numeros: ")

   // L� primeiro n�mero
   escreva("# Digite N1: ")
   leia(n1)

   // L� segundo n�mero
   escreva("# Digite N2: ")
   leia(n2)

   // Troca valores se necess�rio
   se (n1 > n2) entao
      aux <- n2
      n2 <- n1
      n1 <- aux
   fimse

   // Itera entre os n�meros
   para i de (n1 + 1) ate (n2 - 1) faca

      // Verifica e soma �mpares
      se (i mod 2 <> 0) entao
         som <- som + i
      fimse
   fimpara

   // Exibe resultado
   escreval("# Soma dos Impares = ", som)

Fimalgoritmo
