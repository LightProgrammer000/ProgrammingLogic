Algoritmo "EX06"

// Declaração da variável
Var
   gli: real   // Medida da glicose

Inicio

   // Solicita e lê a medida da glicose
   escreva("# Digite a medida da glicose: ")
   leia(gli)

   // Classifica a glicose
   se (gli <= 100) então
      escreval("* Classificação: normal")
   senao
      se (gli <= 140) então
         escreval("* Classificação: elevado")
      senao
         escreval("* Classificação: diabetes")
      fimse
   fimse

Fimalgoritmo
