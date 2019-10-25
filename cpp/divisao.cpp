#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int ncasos, numerador, denominador;
    double divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> ncasos;

    cout << fixed << setprecision(2);

    for(int i=0; i<ncasos; i++){
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >> denominador;

        if(denominador == 0){
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else{
            divisao = (double) numerador / denominador;
            cout << "DIVISAO = " << divisao << endl;
        }
    }

	return 0;
}
