#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, qtdhomens = 0, qtdmulheres = 0;
    double menoraltura, maioraltura, alturafemMedia, alturafemtotal = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char generos[n];

    for(int i=0; i<n; i++){
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> generos[i];
    }

    menoraltura = alturas[0];
    maioraltura = alturas[0];

    for(int i=1; i<n; i++){
        if(alturas[i] > maioraltura){
            maioraltura = alturas[i];
        }
        if(alturas[i] < menoraltura){
            menoraltura = alturas[i];
        }
    }

    for(int i=0; i<n; i++){
        if(generos[i]=='M'){
            qtdhomens++;
        }
        else{
            qtdmulheres++;
            alturafemtotal = alturafemtotal + alturas[i];
        }
    }

    alturafemMedia = alturafemtotal / qtdmulheres;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menoraltura << endl;
    cout << "Maior altura = " << maioraltura << endl;
    cout << "Media das alturas das mulheres = " << alturafemMedia << endl;
    cout << "Numero de homens = " << qtdhomens << endl;

    return 0;
}
