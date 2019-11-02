#include <stdio.h>

int main(){
    int n, x, fora, dentro;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
	
	fora = 0;
	dentro = 0;

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x < 10 || x > 20) {
            fora++;
        }
        else {
            dentro++;
        }
    }
	
	printf("%d DENTRO\n", dentro);
	printf("%d FORA\n", fora);

    return 0;
}
