Algoritmo "EX05"

// Declara��o das vari�veis
Var
   n, som: real  // Notas, soma e m�dia

Inicio

   // Inicializa a soma
   som <- 0

   // Solicita e valida a primeira nota
   escreva("# Digite a primeira nota: ")
   leia(n)

   enquanto ((n < 0) ou (n > 10)) faca
      escreva("# Valor invalido! Tente novamente: ")
      leia(n)
   fimenquanto

   som <- som + n

   // Solicita e valida a segunda nota
   escreva("# Digite a segunda nota: ")
   leia(n)
   
   enquanto ((n < 0) ou (n > 10)) faca
      escreva("# Valor invalido! Tente novamente: ")
      leia(n)
   fimenquanto

   som <- som + n

   // Calcula e exibe a m�dia
   escreval("# Media: ", (som / 2):1:2)

Fimalgoritmo
