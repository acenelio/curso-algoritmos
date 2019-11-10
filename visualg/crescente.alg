Algoritmo "crescente"

Var

   X, Y : real

Inicio

   escreval("Digite dois numeros:")
   leia(X)
   leia(Y)
   
   enquanto X <> Y faca
      se X < Y entao
         escreval("CRESCENTE!")
      senao
         escreval("DECRESCENTE!")
      fimse
      
      escreval("Digite outros dois numeros:")
      leia(X)
      leia(Y)
   fimenquanto

Fimalgoritmo
