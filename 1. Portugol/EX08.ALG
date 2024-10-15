Algoritmo "EX08"

// Declaração das variáveis
Var
   dist: inteiro           // Distância percorrida
   comGas, conMed: real    // Combustível gasto e consumo médio

Inicio

   // Lê a distância percorrida
   escreva("# Distancia percorrida: ")
   leia(dist)

   // Lê o combustível gasto
   escreva("# Combustivel gasto: ")
   leia(comGas)

   // Calcula o consumo médio
   conMed <- dist / comGas

   // Exibe o consumo médio formatado
   escreval("# Consumo medio = ", conMed:1:3)

Fimalgoritmo
