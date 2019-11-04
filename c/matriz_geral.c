#include <stdio.h>
#include <math.h>

int main(){
    int n, indlinha, indcoluna;
    double somapositivos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double matriz[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    somapositivos = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] > 0) {
                somapositivos = somapositivos + matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n\n", somapositivos);

	printf("Escolha uma linha: ");
	scanf("%d", &indlinha);

	printf("LINHA ESCOLHIDA: ");

    for (int i=0; i<n; i++) {
        printf("%.1lf ", matriz[indlinha][i]);
    }

	printf("\n\nEscolha uma coluna: ");
	scanf("%d", &indcoluna);

    printf("COLUNA ESCOLHIDA: ");

    for (int i=0; i<n; i++) {
        printf("%.1lf ", matriz[i][indcoluna]);
    }

	printf("\n\nDIAGONAL PRINCIPAL: ");

    for (int i=0; i<n; i++) {
        printf("%.1lf ", matriz[i][i]);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = pow(matriz[i][j], 2);
            }
        }
    }

	printf("\n\nMATRIZ ALTERADA:\n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%.1lf ", matriz[i][j]);
        }
		printf("\n");
    }

    return 0;
}
