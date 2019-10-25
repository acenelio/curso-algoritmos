#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vetor[n];

    for (int i=0; i<n; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for (int i=0; i<n; i++) {
        soma = soma + vetor[i];
    }

    media = soma / n;

    cout << fixed << setprecision(1);
    cout << "VALORES = ";

    for (int i=0; i<n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << vetor[i];
    }

    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
