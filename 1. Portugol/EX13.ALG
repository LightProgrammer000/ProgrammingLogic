Algoritmo "EX03"

// Declara variáveis inteiras para os valores e o menor
Var
   n1, n2, n3, menor: inteiro

Inicio

   // Lê os três valores
   escreva("# Primeiro valor: ")
   leia(n1)
   menor <- n1

   escreva("# Segundo valor: ")
   leia(n2)

   escreva("# Terceiro valor: ")
   leia(n3)

   // Verifica se todos os valores são iguais
   se ((n1 = n2) e (n1 = n3)) entao
      escreval("# Empate: ", n1)

   senao
      // Verifica e atualiza o menor valor
      se (menor > n2) entao
         menor <- n2
      fimse

      se (menor > n3) entao
         menor <- n3
      fimse

      // Exibe o menor valor
      escreval("# Menor: ", menor)
   fimse

Fimalgoritmo
