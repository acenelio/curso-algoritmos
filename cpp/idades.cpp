#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    string pnome1, snome1, pnome2, snome2;
    int idade1, idade2;
    double idadeMedia;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    cin >> pnome1 >> snome1;
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    cin >> pnome2 >> snome2;
    cout << "Idade: ";
    cin >> idade2;

    idadeMedia=(double)(idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << pnome1 << " e " << pnome2 << " eh de " << idadeMedia << " anos" << endl;

	return 0;
}
