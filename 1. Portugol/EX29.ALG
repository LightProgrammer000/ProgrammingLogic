Algoritmo "EX06.0"

// Declaração das variáveis
Var

   // Contadores para cada opção e código de entrada
   alc, gas, die, cod: inteiro

Inicio

   // Inicializa o código com 0
   cod <- 0
   gas <- 0
   die <- 0
   alc <- 0

   // Loop até o código ser 4
   enquanto cod <> 4 faca

      // Solicita o código do usuário
      escreva("# Informe um codigo (1, 2, 3) ou 4 para parar: ")
      leia(cod)

      // Atualiza contadores conforme o código inserido
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

   // Exibe o relatório final
   escreval("")
   escreval("# MUITO OBRIGADO")
   escreval("# Alcool: ", alc)
   escreval("# Gasolina: ", gas)
   escreval("# Diesel: ", die)

Fimalgoritmo
