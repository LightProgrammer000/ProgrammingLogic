Algoritmo "EX11"

// Declaracao das variaveis
Var
   aum, salAtu: real // Aumento e salário atual
   per: caractere    // Porcentagem do aumento

Inicio

   // Solicita o salário
   escreva("# Digite o salario da pessoa: ")
   leia(salAtu)

   // Verifica e aplica o aumento baseado no salário
   se (salAtu > 8000) entao
      per <- "5" // Aumento de 5%
      aum <- 0.05 * salAtu

   senao
      se (salAtu > 3000) entao
         per <- "10" // Aumento de 10%
         aum <- 0.10 * salAtu

      senao
         se (salAtu > 1000) entao
            per <- "15" // Aumento de 15%
            aum <- 0.15 * salAtu
         senao
            per <- "20" // Aumento de 20%
            aum <- 0.20 * salAtu
         fimse
      fimse
   fimse

   // Exibe o novo salário e os detalhes do aumento
   escreval("# Novo salario: R$ ", (salAtu + aum):1:2)
   escreval("# Aumento: R$ ", aum:1:2)
   escreval("# Porcentagem = ", per, "%")

Fimalgoritmo
