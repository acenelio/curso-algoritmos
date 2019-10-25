#include<iostream>

using namespace std;

int main(){
    int n, qtdnegativos = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int matriz[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matriz[i][j] < 0){
                qtdnegativos++;
            }
        }
    }



    cout << "DIAGONAL PRINCIPAL:" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                cout << matriz[i][j] << " ";
            }
        }
    }

    cout << endl << "QUANTIDADE DE NEGATIVOS = " << qtdnegativos << endl;

    return 0;
}
