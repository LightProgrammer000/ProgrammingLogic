Algoritmo "EX06.1"

Var
   alc, gas, die, cod: inteiro

Inicio

      // Inicializa o c�digo com 0
      cod <- 0

      // Loop at� o c�digo ser 4
      enquanto cod <> 4 faca

          // Solicita o c�digo do usu�rio
          escreva("# Informe um codigo (1, 2, 3) ou 4 para parar: ")
          leia(cod)

          // Processa o c�digo inserido
          escolha (cod)

                 // Incrementa contadores conforme o c�digo
                 caso 1
                      alc <- alc + 1

                 caso 2
                      gas <- gas + 1

                 caso 3
                      die <- die + 1

                 caso 4
                      escreval("")
                      escreval("# Encerrando o programa")

                 outrocaso
                      escreval("# Opcao invalida !")
                      escreval("")

          fimescolha

      fimenquanto

      // Exibe os totais finais
      escreval("")
      escreval("# MUITO OBRIGADO")
      escreval("# Alcool: ", alc)
      escreval("# Gasolina: ", gas)
      escreval("# Diesel: ", die)

Fimalgoritmo
