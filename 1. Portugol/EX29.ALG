Algoritmo "EX06.0"

// Declara��o das vari�veis
Var

   // Contadores para cada op��o e c�digo de entrada
   alc, gas, die, cod: inteiro

Inicio

   // Inicializa o c�digo com 0
   cod <- 0
   gas <- 0
   die <- 0
   alc <- 0

   // Loop at� o c�digo ser 4
   enquanto cod <> 4 faca

      // Solicita o c�digo do usu�rio
      escreva("# Informe um codigo (1, 2, 3) ou 4 para parar: ")
      leia(cod)

      // Atualiza contadores conforme o c�digo inserido
      se (cod = 1) entao
         alc <- alc + 1
      senao
         se (cod = 2) entao
            gas <- gas + 1
         senao
            se (cod = 3) entao
               die <- die + 1
            fimse
         fimse
      fimse
   fimenquanto

   // Exibe o relat�rio final
   escreval("")
   escreval("# MUITO OBRIGADO")
   escreval("# Alcool: ", alc)
   escreval("# Gasolina: ", gas)
   escreval("# Diesel: ", die)

Fimalgoritmo
