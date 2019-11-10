Algoritmo "temperatura"

Var

   C, F : real
   unidade : caractere

Inicio

   escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
   leia(unidade)
   
   se unidade = "F" entao
      escreva("Digite a temperatura em Fahrenheit: ")
      leia(F)
      C <- 5 / 9 * (F - 32)
      escreva("Temperatura equivalente em Celsius: ", C:6:2)
   senao
      escreva("Digite a temperatura em Celsius: ")
      leia(C)
      F <- 9 * C / 5 + 32;
      escreva("Temperatura equivalente em Fahrenheit: ", F:6:2)
   fimse

Fimalgoritmo
