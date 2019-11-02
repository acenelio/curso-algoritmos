#include <stdio.h>

int main(){
    double r, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = 3.14159 * r * r;

    printf("AREA = %.3lf\n", area);

	return 0;
}
