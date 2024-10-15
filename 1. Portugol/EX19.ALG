Algoritmo "EX09"

// Declaracao das variaveis
Var
   cod, qtd: inteiro   // Codigo do produto e quantidade comprada
   val: real           // Valor do produto

Inicio

   // Solicita o codigo do produto e a quantidade comprada
   escreva("# Codigo do produto comprado: ")
   leia(cod)
   
   escreva("# Quantidade comprada: ")
   leia(qtd)

   // Define o valor do produto com base no codigo
   se (cod = 1) entao
      val <- 5.00
   senao
      se (cod = 2) entao
         val <- 3.50
      senao
         se (cod = 3) entao
            val <- 4.80
         senao
            se (cod = 4) entao
               val <- 8.90
            senao
               se (cod = 5) entao
                  val <- 7.32
               fimse
            fimse
         fimse
      fimse
   fimse

   // Exibe o valor total a pagar
   escreval("")
   escreval("* Valor a pagar: R$ ", (val * qtd):1:2)

Fimalgoritmo
