#include <stdio.h>

int main(){
    int hinicial, hfinal;

    printf("Hora inicial: ");
    scanf("%d", &hinicial);

    printf("Hora final: ");
    scanf("%d", &hfinal);

    if (hinicial < hfinal) {
        printf("O JOGO DUROU %d HORA(S)\n", hfinal - hinicial);
    }
    else {
		printf("O JOGO DUROU %d HORA(S)\n", 24 - (hinicial - hfinal));
    }

	return 0;
}
