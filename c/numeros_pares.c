#include <stdio.h>

int main(){
    int n, qtdpares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nNUMEROS PARES:\n");

	qtdpares = 0;
    for (int i=0; i<n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d  ", vetor[i]);
            qtdpares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", qtdpares);

    return 0;
}
