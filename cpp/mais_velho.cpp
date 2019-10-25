#include <iostream>

using namespace std;

int main(){
    int n, maioridade, posicaomaior;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nomes[n];
    int idades[n];

    for(int i=0; i<n; i++){
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
    }

    maioridade = idades[0];
    posicaomaior = 0;

    for(int i=1; i<n; i++){
        if(idades[i] > maioridade){
            maioridade = idades[i];
            posicaomaior = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[posicaomaior] << endl;

    return 0;
}
