#include <stdio.h>

int main(){
    int n, maioridade, posicaomaior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];

    for (int i=0; i<n; i++) {
		printf("Dados da %da pessoa:\n", i + 1);
		printf("Nome: ");
		scanf("%s", &nomes[i][0]);
		printf("Idade: ");
		scanf("%d", &idades[i]);
    }

    maioridade = idades[0];
    posicaomaior = 0;

    for (int i=1; i<n; i++) {
        if (idades[i] > maioridade) {
            maioridade = idades[i];
            posicaomaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nomes[posicaomaior]);

    return 0;
}
