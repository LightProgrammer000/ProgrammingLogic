Algoritmo "EX03"

// Declara��o das vari�veis
Var
   nom1, nom2: caractere  // Nomes das pessoas
   ida1, ida2: inteiro    // Idades das pessoas
   media: real            // M�dia das idades

Inicio

   // L� os dados da primeira pessoa
   escreval("# Dados da primeira pessoa: ")
   escreva("# Nome: ")
   leia(nom1)
   
   escreva("# Idade: ")
   leia(ida1)

   // L� os dados da segunda pessoa
   escreval("")
   escreval("# Dados da segunda pessoa: ")
   escreva("# Nome: ")
   leia(nom2)
   
   escreva("# Idade: ")
   leia(ida2)

   // Calcula a m�dia das idades
   media <- (ida1 + ida2) / 2

   // Exibe a m�dia das idades
   escreval("")
   escreva("# A idade media de ", nom1, " e ", nom2, " = ", media:2:2, " anos")

Fimalgoritmo
