#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int m, n;
    double somalinha;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double matriz[m][n], vetor[m];

    for (int i=0; i<m; i++) {
        cout << "Digite os elementos da " << i + 1 << "a. linha:" << endl;

        for (int j=0; j<n; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i=0; i<m; i++) {
        somalinha = 0;
        for (int j=0; j<n; j++) {
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }

    cout << "VETOR GERADO:" << endl;
    cout << fixed << setprecision(2);

    for(int i=0; i<m; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
