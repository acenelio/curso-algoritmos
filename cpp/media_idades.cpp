#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int idade, npessoas = 0;
    double media = 0;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    if(idade < 0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else{
        while(idade >= 0){
            media = media + idade;
            npessoas++;
            cin >> idade;
        }

        media = media / npessoas;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }
	
	return 0;
}
