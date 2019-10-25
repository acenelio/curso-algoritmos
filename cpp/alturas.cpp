#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, nmenores = 0;
    double alturatotal = 0, alturamedia, percentualMenores;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for (int i=0; i<n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    for (int i=0; i<n; i++) {
        if (idades[i] < 16) {
            nmenores++;
        }
        alturatotal = alturatotal + alturas[i];
    }

    alturamedia = alturatotal / n;
    percentualMenores = ((double)nmenores / n) * 100.0;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << alturamedia << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentualMenores << "%" << endl;

    return 0;
}
