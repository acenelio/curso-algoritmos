#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int idade, npessoas = 0;
    double soma = 0, media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    if(idade < 0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else{
        while(idade >= 0){
            soma = soma + idade;
            npessoas++;
            cin >> idade;
        }

        media = soma / npessoas;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

	return 0;
}
