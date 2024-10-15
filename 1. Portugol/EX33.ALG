Algoritmo "EX09"

// Variáveis
Var
   i, n1, n2, som, aux: inteiro

Inicio

   // Contador
   i <- 0

   // Soma dos ímpares
   som <- 0

   // Auxiliar para troca
   aux <- 0

   // Solicita entrada dos números
   escreval("# Digite dois numeros: ")

   // Lê primeiro número
   escreva("# Digite N1: ")
   leia(n1)

   // Lê segundo número
   escreva("# Digite N2: ")
   leia(n2)

   // Troca valores se necessário
   se (n1 > n2) entao
      aux <- n2
      n2 <- n1
      n1 <- aux
   fimse

   // Itera entre os números
   para i de (n1 + 1) ate (n2 - 1) faca

      // Verifica e soma ímpares
      se (i mod 2 <> 0) entao
         som <- som + i
      fimse
   fimpara

   // Exibe resultado
   escreval("# Soma dos Impares = ", som)

Fimalgoritmo
