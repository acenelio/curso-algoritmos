#include <iostream>

using namespace std;

int main(){
    int m, n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int a[m][n], b[m][n], c[m][n];

    cout << "Digite os valores da matriz A:" << endl;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Digite os valores da matriz B:" << endl;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
