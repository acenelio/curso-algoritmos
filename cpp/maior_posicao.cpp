#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, posmaior;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vetor[n];

    for(int i=0; i<n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    maior = vetor[0];
    posmaior = 0;

    for(int i=1; i<n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posmaior = i;
        }
    }

    cout << fixed << setprecision(1) << endl;
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posmaior << endl;

    return 0;
}
