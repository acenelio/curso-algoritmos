#include <stdio.h>

int main(){
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    printf("Classificacao: ");

    if (glicose <= 100) {
        printf("normal\n");
    }
    else if (glicose <= 140) {
        printf("elevado\n");
    }
    else {
        printf("diabetes\n");
    }

	return 0;
}
