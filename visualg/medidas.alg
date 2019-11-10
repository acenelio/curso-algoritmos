Algoritmo "medidas"

Var

    A, B, C, areaQuadrado, areaTriangulo, areaTrapezio : real

Inicio

    escreva("Digite a medida A: ")
    leia(A)
    escreva("Digite a medida B: ")
    leia(B)
    escreva("Digite a medida C: ")
    leia(C)

    areaQuadrado <- A * A
    areaTriangulo <- (A * B) / 2
    areaTrapezio <- (A + B) / 2 * C

    escreval("QUADRADO = ", areaQuadrado:10:4)
    escreval("TRIANGULO = ", areaTriangulo:10:4)
    escreval("TRAPEZIO = ", areaTrapezio:10:4)
    
Fimalgoritmo
