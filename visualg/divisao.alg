Algoritmo "divisao"

Var

   N, i : inteiro
   x, y, divisao : real

Inicio

   escreva("Quantos casos voce vai digitar? ")
   leia(N)
   
   para i de 1 ate N faca

      escreva("Entre com o numerador: ")
      leia(x)
      escreva("Entre com o denominador: ")
      leia(y)
      
      se y = 0 entao
         escreval("DIVISAO IMPOSSIVEL")
      senao
         divisao <- x / y
         escreval("DIVISAO = ", divisao:4:2)
      fimse
      
   fimpara

Fimalgoritmo
