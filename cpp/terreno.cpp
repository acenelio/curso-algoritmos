#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double largura, comprimento, valor, area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;

    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;

    area = largura * comprimento;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;

    preco = area * valor;

    cout << "Preco do terreno = " << preco << endl;

	return 0;
}
