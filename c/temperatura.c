#include <stdio.h>

int main(){
    char escala;
    double celsius, fahrenheit;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
		scanf("%lf", &fahrenheit);

        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
		scanf("%lf", &celsius);

        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
    }

	return 0;
}
