#include <stdio.h>

int main(){
    int n, somaAcima;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
			printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

	somaAcima = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i < j) {
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", somaAcima);

    return 0;
}
