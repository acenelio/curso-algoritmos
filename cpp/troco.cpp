#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double preco, dinheiro, troco;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> qtd;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (preco * qtd);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

	return 0;
}
