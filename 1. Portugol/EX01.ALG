Algoritmo "EX01"

// Declara��o das vari�veis
Var
   lar, com, val, are, pre: real

Inicio

   // L� a largura do terreno
   escreva("# Digite a largura do terreno: ")
   leia(lar)

   // L� o comprimento do terreno
   escreva("# Digite o comprimento do terreno: ")
   leia(com)

   // L� o valor do metro quadrado
   escreva("# Digite o valor do metro quadrado: ")
   leia(val)

   // Calcula a �rea do terreno
   are <- lar * com

   // Calcula o pre�o do terreno
   pre <- are * val

   // Exibe a �rea do terreno
   escreval("# Area do terreno: ", are:10:2)

   // Exibe o pre�o do terreno
   escreval("# Preco do terreno: ", pre:10:2)

Fimalgoritmo
