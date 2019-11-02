#include <stdio.h>

int main(){
    int n, abaixo, entre, acima;
    double vtotalcompra, vtotalvenda, lucrototal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nomes[n][50];
    double pcompra[n], pvenda[n], porcentagemlucros[n];

    for (int i=0; i<n; i++) {
		printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &pcompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &pvenda[i]);
     }

    for (int i=0; i<n; i++) {
        porcentagemlucros[i] = (pvenda[i] - pcompra[i]) / pcompra[i] * 100.0;
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (int i=0; i<n; i++) {
        if (porcentagemlucros[i] < 10.0) {
            abaixo++;
        }
        else if (porcentagemlucros[i] < 20.0) {
            entre++;
        }
        else {
            acima++;
        }
    }

    vtotalcompra = 0;
    vtotalvenda = 0;

    for (int i=0; i<n; i++) {
        vtotalcompra = vtotalcompra + pcompra[i];
        vtotalvenda = vtotalvenda + pvenda[i];
    }

    lucrototal = vtotalvenda - vtotalcompra;

	printf("\nRELATORIO:\n");
	printf("Lucro abaixo de 10%%: %d\n", abaixo);
	printf("Lucro entre 10%% e 20%%: %d\n", entre);
	printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", vtotalcompra);
    printf("Valor total de venda: %.2lf\n", vtotalvenda);
    printf("Lucro total: %.2lf\n", lucrototal);

    return 0;
}
