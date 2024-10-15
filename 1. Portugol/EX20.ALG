Algoritmo "EX10"

// Declaracao das variaveis
Var
   n1, n2, aux: inteiro // Números inteiros e auxiliar para troca

Inicio

   // Solicita dois números inteiros
   escreval("# Digite dois numeros inteiros")
   escreval("")

   escreva("# N1: ")
   leia(n1)

   escreva("# N2: ")
   leia(n2)

   // Garante que n1 seja o maior
   se (n1 < n2) entao
      aux <- n2
      n2 <- n1
      n1 <- aux
   fimse

   // Verifica se n1 é múltiplo de n2
   se (n1 mod n2 = 0) entao
      escreva("# Sao multiplos")
   senao
      escreval("# Nao sao multiplos")
   fimse

Fimalgoritmo
