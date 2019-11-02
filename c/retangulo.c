#include <stdio.h>
#include <math.h>

int main(){
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;

    printf("AREA = %.4lf\n", area);

    perimetro = 2 * (base + altura);

    printf("PERIMETRO = %.4lf\n", perimetro);

    diagonal = sqrt(base * base + altura * altura);

    printf("DIAGONAL = %.4lf\n", diagonal);

	return 0;
}
