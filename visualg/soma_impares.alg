Algoritmo "soma_impares"

Var

   X, Y, troca, i, soma : inteiro

Inicio

   escreval("Digite dois numeros:")
   leia(X)
   leia(Y)
   
   se X > Y entao
      troca <- x
      x <- y
      y <- troca
   fimse
   
   soma <- 0
   para i de x+1 ate y-1 faca
      se i % 2 <> 0 entao
         soma <- soma + i
      fimse
   fimpara
   
   escreval("SOMA DOS IMPARES = ", soma)

Fimalgoritmo
