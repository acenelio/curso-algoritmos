Algoritmo "comerciante"

Var

    N, i, abaixo, entre, acima : inteiro
    totalCompra, totalVenda, totalLucro, lucro, percentualLucro : real
    nomes : vetor [0..99] de caractere
    precosCompra : vetor [0..99] de real
    precosVenda : vetor [0..99] de real

Inicio

    escreva("Serao digitados dados de quantos produtos? ")
    leia(N)
    
    para i de 0 ate N-1 faca
        escreval("Produto ", i+1)
        escreva("Nome: ")
        leia(nomes[i])
        escreva("Preco de compra: ")
        leia(precosCompra[i])
        escreva("Preco de venda: ")
        leia(precosVenda[i])
    fimpara
    
    abaixo <- 0
    entre <- 0
    acima <- 0
    para i de 0 ate N-1 faca

        lucro <- precosVenda[i] - precosCompra[i]
        percentualLucro <- lucro * 100.0 / precosCompra[i]

        se percentualLucro < 10 entao
            abaixo <- abaixo + 1
        senao
            se percentualLucro <= 20 entao
                entre <- entre + 1
            senao
                acima <- acima + 1
            fimse
        fimse
    fimpara
    
    totalCompra <- 0
    totalVenda <- 0
    para i de 0 ate N-1 faca
        totalCompra <- totalCompra + precosCompra[i]
        totalVenda <- totalVenda + precosVenda[i]
    fimpara
    
    totalLucro <- totalVenda - totalCompra
    
    escreval
    escreval("RELATORIO:")
    escreval("Lucro abaixo de 10%: ", abaixo)
    escreval("Lucro entre 10% e 20%: ", entre)
    escreval("Lucro acima de 20%: ", acima)
    escreval("Valor total de compra: ", totalCompra:4:2)
    escreval("Valor total de venda: ", totalVenda:4:2)
    escreval("Lucro total: ", totalLucro:4:2)

Fimalgoritmo
