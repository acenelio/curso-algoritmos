#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double valor, valor1, valor2, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(1);

    for(int i=0; i<n; i++){
        cout << "Digite tres numeros:" << endl;
        cin >> valor >> valor1 >> valor2;

        media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0;

        cout << "MEDIA = " << media << endl;
    }
	return 0;
}
