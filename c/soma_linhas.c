#include <stdio.h>

int main(){
    int m, n;
    double somalinha;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double matriz[m][n], vetor[m];

    for (int i=0; i<m; i++) {
        printf("Digite os elementos da %d a. linha\n", i + 1);

        for (int j=0; j<n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        somalinha = 0;

        for (int j=0; j<n; j++) {
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }

    printf("VETOR GERADO:\n");

    for (int i=0; i<m; i++) {
        printf("%.1lf\n", vetor[i]);
    }

    return 0;
}
