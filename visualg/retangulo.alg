Algoritmo "retangulo"

Var

    base, altura, area, perimetro, diagonal: real

Inicio

    escreva("Base do retangulo: ")
    leia(base)
    escreva("Altura do retangulo: ")
    leia(altura)

    area <- base * altura
    perimetro <- 2 * (base + altura)
    diagonal <- RaizQ(base * base + altura * altura)

    escreval("AREA = ", area:8:4)
    escreval("PERIMETRO = ", perimetro:8:4)
    escreval("DIAGONAL = ", diagonal:8:4)

Fimalgoritmo
