#include <stdio.h>

int main(){
    int n, ratos, sapos, coelhos, qtdcobaias, total;
    char tipo;
    double pratos, psapos, pcoelhos;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

	ratos = 0;
	sapos = 0;
	coelhos = 0;

    for (int i=0; i<n; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtdcobaias);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if (tipo == 'R') {
            ratos = ratos + qtdcobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + qtdcobaias;
        }
        else {
            coelhos = coelhos + qtdcobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pcoelhos = ((double)coelhos / total) * 100.0;
    pratos = ((double)ratos / total) * 100.0;
    psapos = ((double)sapos / total) * 100.0;

	printf("\nRELATORIO FINAL:\n");
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", pcoelhos);
    printf("Percentual de ratos: %.2lf\n", pratos);
    printf("Percentual de sapos: %.2lf\n", psapos);

    return 0;
}
