#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    int n;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nomes[n][50];
    double notas1[n], notas2[n];

    for (int i=0; i<n; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        limpar_entrada();
        ler_texto(nomes[i], 50);
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
