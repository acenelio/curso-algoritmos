Algoritmo "experiencias"

Var
   N, i, qte, totalCobaias, totalSapos, totalCoelhos, totalRatos : inteiro
   pratos, psapos, pcoelhos : real
   tipoCobaia : caractere

Inicio

   totalRatos <- 0
   totalCoelhos <- 0
   totalSapos <- 0

   escreva("Quantos casos de teste serao digitados? ")
   leia(N)
   
   para i de 1 ate N faca
   
      escreva("Quantidade de cobaias: ")
      leia(qte)
      escreva("Tipo de cobaia: ")
      leia(tipoCobaia)
      
      se tipoCobaia = "R" entao
         totalRatos <- totalRatos + qte
      senao
         se tipoCobaia = "S" entao
            totalSapos <- totalSapos + qte
         senao
            totalCoelhos <- totalCoelhos + qte
         fimse
      fimse
   
   fimpara
   
   totalCobaias <- totalRatos + totalSapos + totalCoelhos
   
   pcoelhos <- totalCoelhos / totalCobaias * 100
   pratos <- totalRatos / totalCobaias * 100
   psapos <- totalSapos / totalCobaias * 100
   
   escreval
   escreval("RELATORIO FINAL:")
   escreval("Total: ", totalCobaias, " cobaias")
   escreval("Total de coelhos: ", totalCoelhos)
   escreval("Total de ratos: ", totalRatos)
   escreval("Total de sapos: ", totalSapos)
   escreval("Percentual de coelhos: ", pcoelhos:4:2)
   escreval("Percentual de ratos: ", pratos:4:2)
   escreval("Percentual de sapos: ", psapos:4:2)

Fimalgoritmo
