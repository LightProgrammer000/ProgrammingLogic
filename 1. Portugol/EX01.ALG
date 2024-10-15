Algoritmo "EX01"

// Declaração das variáveis
Var
   lar, com, val, are, pre: real

Inicio

   // Lê a largura do terreno
   escreva("# Digite a largura do terreno: ")
   leia(lar)

   // Lê o comprimento do terreno
   escreva("# Digite o comprimento do terreno: ")
   leia(com)

   // Lê o valor do metro quadrado
   escreva("# Digite o valor do metro quadrado: ")
   leia(val)

   // Calcula a área do terreno
   are <- lar * com

   // Calcula o preço do terreno
   pre <- are * val

   // Exibe a área do terreno
   escreval("# Area do terreno: ", are:10:2)

   // Exibe o preço do terreno
   escreval("# Preco do terreno: ", pre:10:2)

Fimalgoritmo
