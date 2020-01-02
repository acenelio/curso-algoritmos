#include <stdio.h>

int main(){
    int n, nmenores;
    double alturatotal, alturamedia, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i=0; i<n; i++) {
		printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

	nmenores = 0;
	alturatotal = 0;
    for (int i=0; i<n; i++) {
        if (idades[i] < 16) {
            nmenores++;
        }
        alturatotal = alturatotal + alturas[i];
    }

    alturamedia = alturatotal / n;
    percentualMenores = ((double)nmenores / n) * 100.0;

	printf("\nAltura media = %.2lf\n", alturamedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for(int i=0; i<n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
