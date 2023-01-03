Algoritmo "funcionarios"

Var
  N, i, cont: inteiro
  nome, maiorNome: caractere
  salario, maiorSalario, soma, media: real

Inicio
  escreva("Quantos funcionarios serao digitados? ")
  leia(N)
  
  cont <- 0
  soma <- 0.0
  maiorSalario <- 0
  maiorNome <- ""
  
  para i de 1 ate N faca
     escreval("Digite os dados do ", i, "o funcionario:")
     escreva("Nome: ")
     leia(nome)
     escreva("Salario: ")
     leia(salario)
     
     se salario > maiorSalario entao
        maiorSalario <- salario
        maiorNome <- nome
     fimse
     
     se (salario >= 5000.0) e (salario <= 10000.0) entao
        soma <- soma + salario
        cont <- cont + 1
     fimse
  fimpara
  
  media <- soma / cont
  
  escreval
  escreval("Funcionario com maior salario: ", maiorNome)
  escreval("Salario medio de quem ganha de 5000.00 a 10000.00 = ", media:4:2)

Fimalgoritmo
