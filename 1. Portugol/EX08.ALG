Algoritmo "EX08"

// Declara��o das vari�veis
Var
   dist: inteiro           // Dist�ncia percorrida
   comGas, conMed: real    // Combust�vel gasto e consumo m�dio

Inicio

   // L� a dist�ncia percorrida
   escreva("# Distancia percorrida: ")
   leia(dist)

   // L� o combust�vel gasto
   escreva("# Combustivel gasto: ")
   leia(comGas)

   // Calcula o consumo m�dio
   conMed <- dist / comGas

   // Exibe o consumo m�dio formatado
   escreval("# Consumo medio = ", conMed:1:3)

Fimalgoritmo
