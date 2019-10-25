#include<iostream>

using namespace std;

int main(){
    int primeiro, segundo, terceiro, menor;

    cout << "Primeiro valor: ";
    cin >> primeiro;

    cout << "Segundo valor: ";
    cin >> segundo;

    cout << "Terceiro valor: ";
    cin >> terceiro;

    if(primeiro < segundo && primeiro < terceiro){
        menor = primeiro;
    }
    else if(segundo < primeiro && segundo < terceiro){
        menor = segundo;
    }
    else{
        menor = terceiro;
    }

    cout << "MENOR = " << menor << endl;

	return 0;
}
