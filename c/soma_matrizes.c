#include <stdio.h>

int main(){
    int m, n;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[m][n];

    printf("Digite os valores da matriz A:\n");

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
