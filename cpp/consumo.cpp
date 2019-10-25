#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int distancia;
    double gasto, consumo;

    cout << "Distancia percorrida: ";
    cin >> distancia;

    cout << "Combustivel gasto: ";
    cin >> gasto;

    consumo = distancia/gasto;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << endl;

	return 0;
}
