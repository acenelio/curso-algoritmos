#include <stdio.h>

int main(){
    int n, posmaior;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    maior = vetor[0];
    posmaior = 0;

    for (int i=1; i<n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posmaior = i;
        }
    }
	
    printf("MAIOR VALOR = %.1lf\n", maior);
	printf("POSICAO DO MAIOR VALOR = %d\n", posmaior);

    return 0;
}
