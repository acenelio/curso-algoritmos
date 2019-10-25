#include <iostream>

using namespace std;

int main(){
    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while(senha != 2002){
        cout << "Senha Invalida! Tente novamente: ";
        cin >> senha;
    }

    cout << "Acesso permitido!" << endl;

	return 0;
}
