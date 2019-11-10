Algoritmo "pares_consecutivos"

Var

   X, soma : inteiro

Inicio

   escreva("Digite um numero inteiro: ")
   leia(X)
   
   se X % 2 <> 0 entao
      X <- X + 1
   fimse

   enquanto X <> 0 faca
   
      soma <- 5 * X + 20
      escreval("SOMA = ", soma)
   
      escreva("Digite um numero inteiro: ")
      leia(X)
   
   fimenquanto

Fimalgoritmo
