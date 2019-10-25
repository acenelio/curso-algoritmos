#include <iostream>

using namespace std;

int main(){
    int n, somaAcima = 0;

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
            if(i < j){
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << somaAcima << endl;

    return 0;
}
