Algoritmo "EX01"

// Declara��o das vari�veis
Var
   n1, n2, soma: real  // Notas e soma das notas

Inicio

   // Solicita a primeira nota
   escreva("# Digite a primeira nota: ")
   leia(n1)

   // Solicita a segunda nota
   escreva("# Digite a segunda nota: ")
   leia(n2)

   // Calcula a soma das notas
   soma <- n1 + n2

   // Exibe a nota final formatada com uma casa decimal
   escreval("* Nota Final: ", soma:1:1)

   // Verifica se a soma � menor que 60
   se (soma < 60) entao
      escreval("# Reprovado")
   fimse

Fimalgoritmo
