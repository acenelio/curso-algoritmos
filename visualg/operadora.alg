Algoritmo "operadora"

Var

   minutos : inteiro
   valorPago : real

Inicio

   escreva("Digite a quantidade de minutos: ")
   leia(minutos)
   
   valorPago <- 50.0
   se minutos > 100 entao
      valorPago <- valorPago + 2 * (minutos - 100)
   fimse
   
   escreval("Valor a pagar: R$ ", valorPago:8:2)

Fimalgoritmo