#include <stdio.h>

int main(){
    int distancia;
    double gasto, consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    consumo = distancia/gasto;

	printf("Consumo medio = %.3lf\n", consumo);

	return 0;
}
