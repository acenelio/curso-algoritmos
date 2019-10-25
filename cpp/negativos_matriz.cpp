#include <iostream>

using namespace std;

int main(){
    int m, n;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    int matriz[m][n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "VALORES NEGATIVOS:" << endl;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if(matriz[i][j] < 0){
                cout << matriz[i][j] << endl;
            }
        }
    }

    return 0;
}
