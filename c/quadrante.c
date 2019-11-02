#include <stdio.h>

int main(){
    int x, y;

    printf("Digite os valores das coordenadas X e Y:\n");
    scanf("%d %d", &x, &y);

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            printf("QUADRANTE Q1\n");
        }
        else if (x < 0 && y > 0) {
            printf("QUADRANTE Q2\n");
        }
        else if (x < 0 && y < 0) {
            printf("QUADRANTE Q3\n");
        }
        else {
            printf("QUADRANTE Q4\n");
        }

        printf("Digite os valores das coordenadas X e Y:\n");
		scanf("%d %d", &x, &y);
    }

	return 0;
}
