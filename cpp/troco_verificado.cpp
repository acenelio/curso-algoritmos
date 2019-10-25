#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double preco, dinheiro, troco, faltam;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> qtd;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    cout << fixed << setprecision(2);

    if (preco * qtd > dinheiro) {
        faltam = preco * qtd - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << faltam << endl;
    }
    else {
        troco = dinheiro - preco * qtd;
        cout << "TROCO = " << troco << endl;
    }

	return 0;
}
