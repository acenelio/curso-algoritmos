#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << "Digite os valores do vetor A:" << endl;

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "Digite os valores do vetor B:" << endl;

    for (int i=0; i<n; i++) {
        cin >> b[i];
    }

    for (int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
    }

    cout << "VETOR RESULTANTE:" << endl;

    for (int i=0; i<n; i++) {
        cout << c[i] << endl;
    }

    return 0;
}
