Algoritmo "idades"

Var

    nome1, nome2 : caractere
    idade1, idade2 : inteiro
    media : real

Inicio

    escreval("Dados da primeira pessoa:")
    escreva("Nome: ")
    leia(nome1)
    escreva("Idade: ")
    leia(idade1)

    escreval("Dados da segunda pessoa:")
    escreva("Nome: ")
    leia(nome2)
    escreva("Idade: ")
    leia(idade2)

    media <- (idade1 + idade2) / 2
    
    escreval("A idade média de ", nome1, " e ", nome2, " eh de ", media:5:1, " anos")

Fimalgoritmo
