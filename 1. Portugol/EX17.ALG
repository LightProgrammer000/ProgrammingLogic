Algoritmo "EX07"

// Declaracao das variaveis
Var
   maior, d2, d3: real   // Distancias

Inicio

   // Solicita e le as distancias
   escreval("# Digite as tres distancias")

   escreva("* D1: ")
   leia(maior)

   escreva("* D2: ")
   leia(d2)

   escreva("* D3: ")
   leia(d3)

   // Verifica e atualiza a maior distancia
   se (maior < d2) entao
      maior <- d2
   fimse

   se (maior < d3) entao
      maior <- d3
   fimse

   // Exibe a maior distancia
   escreva("* MAIOR DISTANCIA = ", maior:2:2)
   escreval("")

Fimalgoritmo
