#include <stdio.h>

int main(){
    int n, qtdhomens, qtdmulheres;
    double menoraltura, maioraltura, alturafemMedia, alturafemtotal;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double alturas[n];
    char generos[n];

    for (int i=0; i<n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
    }

    menoraltura = alturas[0];
    maioraltura = alturas[0];

    for (int i=1; i<n; i++) {
        if (alturas[i] > maioraltura) {
            maioraltura = alturas[i];
        }
        if (alturas[i] < menoraltura) {
            menoraltura = alturas[i];
        }
    }

	qtdhomens = 0;
	qtdmulheres = 0;
	alturafemtotal = 0;
    for (int i=0; i<n; i++) {
        if (generos[i]=='M') {
            qtdhomens++;
        }
        else {
            qtdmulheres++;
            alturafemtotal = alturafemtotal + alturas[i];
        }
    }

    alturafemMedia = alturafemtotal / qtdmulheres;

    printf("Menor altura = %.2lf\n", menoraltura);
    printf("Maior altura = %.2lf\n", maioraltura);
    printf("Media das alturas das mulheres = %.2lf\n", alturafemMedia);
	printf("Numero de homens = %d\n", qtdhomens);

    return 0;
}
