#include <stdio.h>

int main(){
    int n, qtdnegativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
			printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (int i=0; i<n; i++) {
        printf("%d ", matriz[i][i]);
    }

    qtdnegativos = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                qtdnegativos++;
            }
        }
    }

	printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtdnegativos);

    return 0;
}
