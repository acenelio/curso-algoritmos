#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, qtd;
    double pagar;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> qtd;

    if(codigo == 1){
        pagar = qtd * 5.00;
    }
    else if(codigo == 2){
        pagar = qtd * 3.50;
    }
    else if(codigo == 3){
        pagar = qtd * 4.80;
    }
    else if(codigo == 4){
        pagar = qtd * 8.90;
    }
    else if(codigo == 5){
        pagar = qtd * 7.32;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << pagar << endl;

	return 0;
}
