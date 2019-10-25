#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nomes[n];
    double notas1[n], notas2[n];

    for(int i=0; i<n; i++){
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n'); // --------------> limpeza de buffer
        getline(cin, nomes[i]);
        cin >> notas1[i] >> notas2[i];
    }

    cout << "Alunos aprovados:" << endl;

    for(int i=0; i<n; i++){
        media = (notas1[i] + notas2[i]) / 2;

        if(media >= 6.0){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
