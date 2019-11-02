#include <stdio.h>

int main(){
    int n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

	soma = 0;
    for (int i=0; i<n; i++) {
        soma = soma + vetor[i];
    }

    media = soma / n;

	printf("VALORES = ");

    for (int i=0; i<n; i++) {
        printf("%.1lf  ", vetor[i]);
    }

    printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", media);

    return 0;
}
