Algoritmo "EX06"

// Declara��o da vari�vel
Var
   gli: real   // Medida da glicose

Inicio

   // Solicita e l� a medida da glicose
   escreva("# Digite a medida da glicose: ")
   leia(gli)

   // Classifica a glicose
   se (gli <= 100) ent�o
      escreval("* Classifica��o: normal")
   senao
      se (gli <= 140) ent�o
         escreval("* Classifica��o: elevado")
      senao
         escreval("* Classifica��o: diabetes")
      fimse
   fimse

Fimalgoritmo
