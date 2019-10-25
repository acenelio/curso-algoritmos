#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int minutos;
    double valor;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    valor = 50.0;

    if(minutos>100){
        minutos = minutos - 100;
        valor = valor + minutos * 2.0;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

	return 0;
}
