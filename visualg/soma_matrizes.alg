Algoritmo "soma_matrizes"

Var

   M, N, i, j : inteiro
   A : vetor [0..9, 0..9] de real
   B : vetor [0..9, 0..9] de real
   C : vetor [0..9, 0..9] de real

Inicio

   escreva("Quantas linhas vai ter cada matriz? ")
   leia(M)
   escreva("Quantas colunas vai ter cada matriz? ")
   leia(N)

   escreval("Digite os valores da matriz A:")
   para i de 0 ate M-1 faca
      para j de 0 ate N-1 faca
         escreva("Elemento [", i, ",", j, "]: ")
         leia(A[i, j])
      fimpara
   fimpara
   
   escreval("Digite os valores da matriz B:")
   para i de 0 ate M-1 faca
      para j de 0 ate N-1 faca
         escreva("Elemento [", i, ",", j, "]: ")
         leia(B[i, j])
      fimpara
   fimpara
   
   para i de 0 ate M-1 faca
      para j de 0 ate N-1 faca
         C[i, j] <- A[i, j] + B[i, j]
      fimpara
   fimpara

   escreval("MATRIZ SOMA:")
   para i de 0 ate M-1 faca
      para j de 0 ate N-1 faca
         escreva(C[i, j], " ")
      fimpara
      escreval
   fimpara

Fimalgoritmo
