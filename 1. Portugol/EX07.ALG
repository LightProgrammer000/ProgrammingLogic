Algoritmo "EX07"

// Declaração das variáveis
Var
   valHor, pag: real       // Valor por hora e pagamento total
   horTra: inteiro         // Horas trabalhadas
   nom: caractere          // Nome do funcionário

Inicio

   // Lê o nome do funcionário
   escreva("# Nome: ")
   leia(nom)

   // Lê o valor por hora
   escreva("# Valor por hora: ")
   leia(valHor)

   // Lê a quantidade de horas trabalhadas
   escreva("# Horas trabalhadas: ")
   leia(horTra)

   // Calcula o pagamento total
   pag <- valHor * horTra

   // Exibe o pagamento formatado
   escreval("")
   escreval("# O pagamento para ", nom, " deve ser ", pag:1:2)

Fimalgoritmo
