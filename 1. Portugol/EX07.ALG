Algoritmo "EX07"

// Declara��o das vari�veis
Var
   valHor, pag: real       // Valor por hora e pagamento total
   horTra: inteiro         // Horas trabalhadas
   nom: caractere          // Nome do funcion�rio

Inicio

   // L� o nome do funcion�rio
   escreva("# Nome: ")
   leia(nom)

   // L� o valor por hora
   escreva("# Valor por hora: ")
   leia(valHor)

   // L� a quantidade de horas trabalhadas
   escreva("# Horas trabalhadas: ")
   leia(horTra)

   // Calcula o pagamento total
   pag <- valHor * horTra

   // Exibe o pagamento formatado
   escreval("")
   escreval("# O pagamento para ", nom, " deve ser ", pag:1:2)

Fimalgoritmo
