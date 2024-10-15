Algoritmo "EX08"

// Declaracao das variaveis
Var
   opc: caractere   // Opcao de escala
   fah, cel: real   // Temperaturas

Inicio

   // Solicita a escala de temperatura
   escreva("# Voce vai digitar a temperatura em qual escala (C/F): ")
   leia(opc)

   // Verifica a escala e realiza a conversao
   se (opc = "F") entao

      escreva("# Digite a temperatura em Fahrenheit: ")
      leia(fah)

      cel <- 5/9 * (fah - 32)
      escreva("# Temperatura equivalente em Celsius: ", cel:2:2)

   senao
      se (opc = "C") entao

         escreva("# Digite a temperatura em Celsius: ")
         leia(cel)

         fah <- (9 * cel) / 5 + 32
         escreva("# Temperatura equivalente em Fahrenheit: ", fah:2:2)

      senao
         escreva("# Opcao invalida!")
      fimse
   fimse

   escreval("")

Fimalgoritmo
