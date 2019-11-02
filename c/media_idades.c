#include <stdio.h>

int main(){
    int idade, npessoas;
    double soma, media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
		soma = 0;
		npessoas = 0;
        while (idade >= 0) {
            soma = soma + idade;
            npessoas++;
            scanf("%d", &idade);
        }

        media = soma / npessoas;

		printf("MEDIA = %.2lf\n", media);
    }

	return 0;
}
