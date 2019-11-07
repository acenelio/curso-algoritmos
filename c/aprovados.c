#include <stdio.h>

int main(){
    int n;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nomes[n][50];
    double notas1[n], notas2[n];

    for (int i=0; i<n; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
		scanf("%lf %lf", &notas1[i], &notas2[i]);
    }

    printf("Alunos aprovados:\n");

    for (int i=0; i<n; i++) {
        media = (notas1[i] + notas2[i]) / 2;

        if(media >= 6.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
