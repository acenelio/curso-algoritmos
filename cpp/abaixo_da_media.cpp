#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double soma = 0, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vetor[n];

    for(int i=0; i<n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for(int i=0; i<n; i++){
        soma = soma + vetor[i];
    }

    media = soma / n;

    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << media << endl;
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    cout << fixed << setprecision(1);

    for(int i=0; i<n; i++){
        if(vetor[i] < media){
            cout << vetor[i] << endl;
        }
    }

    return 0;
}
