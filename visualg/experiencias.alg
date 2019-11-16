Algoritmo "experiencias"

Var

    n, i, ratos, sapos, coelhos, qtdcobaias, total : inteiro
    pratos, psapos, pcoelhos : real
    tipoCobaia : caractere

Inicio

    escreva("Quantos casos de teste serao digitados? ")
    leia(n)

    para i de 1 ate n faca
        escreva("Quantidade de cobaias: ")
        leia(qtdcobaias)
        escreva("Tipo de cobaia: ")
        leia(tipoCobaia)

        se tipoCobaia = "R" entao
            ratos <- ratos + qtdcobaias
        senao
            se tipoCobaia = "S" entao
                sapos <- sapos + qtdcobaias
            senao
                coelhos <- coelhos + qtdcobaias
            fimse
        fimse
    fimpara

    total <- ratos + sapos + coelhos
    pcoelhos <- coelhos * 100.0 / total;
    pratos <- ratos * 100.0 / total;
    psapos <- sapos * 100.0 / total;

    escreval
    escreval("RELATORIO FINAL:")
    escreval("Total: ", total, " cobaias")
    escreval("Total de coelhos: ", coelhos)
    escreval("Total de ratos: ", ratos)
    escreval("Total de sapos: ", sapos)
    escreval("Percentual de coelhos: ", pcoelhos:4:2)
    escreval("Percentual de ratos: ", pratos:4:2)
    escreval("Percentual de sapos: ", psapos:4:2)

Fimalgoritmo
