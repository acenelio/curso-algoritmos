#include <iostream>

using namespace std;

int main(){
    int n, x, fora = 0, dentro = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Digite um numero: ";
        cin >> x;

        if(x < 10 || x > 20){
            fora++;
        }
        else{
            dentro++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}
