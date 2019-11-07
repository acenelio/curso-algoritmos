#include <stdio.h>

int main(){
    int n;
    double soma, media;

    printf("Quantos elementos vai ter o vetor? ");
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

	printf("\nMEDIA DO VETOR = %.3lf\n", media);
	printf("ELEMENTOS ABAIXO DA MEDIA:\n");

    for (int i=0; i<n; i++) {
        if (vetor[i] < media) {
            printf("%.1lf\n", vetor[i]);
        }
    }

    return 0;
}
