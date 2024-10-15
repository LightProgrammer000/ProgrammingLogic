Algoritmo "EX02"

// Declara variáveis reais para os coeficientes e raízes
Var
   a, b, c, x1, x2, del: real

Inicio
   // Lê os coeficientes da equação quadrática
   escreva("# Coeficiente a: ")
   leia(a)

   escreva("# Coeficiente b: ")
   leia(b)

   escreva("# Coeficiente c: ")
   leia(c)

   // Calcula o discriminante (delta)
   del <- exp(b, 2) - 4 * a * c

   // Verifica se a equação é inválida ou não possui raízes reais
   se (a = 0) ou (del < 0) entao
      escreval("* Esta equacao esta invalidada ou nao possui raizes reais")
   senao
      // Calcula e exibe as raízes
      x1 <- (-b + raizq(del)) / (2 * a)
      x2 <- (-b - raizq(del)) / (2 * a)

      escreval("* X1 = ", x1:1:4)
      escreval("* X2 = ", x2:1:4)
   fimse

Fimalgoritmo
